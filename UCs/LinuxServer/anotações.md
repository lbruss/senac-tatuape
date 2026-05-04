# 🔐 Segurança de Redes + Firewall com Debian

## 📌 Visão Geral

Segurança de redes envolve garantir:

- 📡 **Disponibilidade** → sistema sempre acessível  
- ⚡ **Desempenho** → funcionamento eficiente  
- 🔒 **Confidencialidade** → evitar roubo de dados  

---

## 🚪 Firewall (Conceito)

O **firewall** é um sistema que controla o tráfego entre redes.

- Fica entre:
  - 🌐 Internet (rede externa)
  - 🏢 Rede interna (privada)

> 💡 **Analogia:**  
É como uma **porta com segurança**: decide quem entra, quem sai e o que pode passar.

---

# 🐧 Debian como Firewall

## 📌 Ideia

Usar um servidor com **Debian Linux** como firewall da rede.

- Substitui um roteador doméstico  
- Mais controle e segurança  
- Ideal para ambiente corporativo  

---

## 🧠 Cenário da Rede

- 🐧 Debian Server → Firewall  
- 🖥️ Windows Server → AD, DHCP, DNS  
- 🔌 Ambos conectados no mesmo **switch**

---

## 🌐 Interfaces de Rede

O Debian terá **2 placas de rede**:

1. **WAN (Internet)**
   - Modo: NAT  
2. **LAN (Rede interna)**
   - Modo: Rede interna  

> 💡 **Analogia:**  
- WAN = porta para o mundo  
- LAN = porta para a empresa  

---

# ⚙️ Instalação Inicial do Debian

## 📌 Instalar com:

- Sistema básico  
- SSH ativado  

---

## 📦 Instalar pacotes úteis

```bash
apt install vim
apt install linuxlogo
``` id="k3ybxk"

---

## 🎨 Personalização (opcional)

```bash
cd /etc
cat issue.linuxlogo > issue
``` id="b5d3sl"

✔️ Exibe logo no terminal

---

# 🌐 Configuração de Rede

## 📁 Acessar diretório

```bash
cd /etc/network
``` id="x9v9zw"

---

## 💾 Backup do arquivo

```bash
cp interfaces interfaces.bkp
``` id="3h9vqa"

✔️ Evita perda de configuração

---

## 🔍 Ver interfaces

```bash
ip a
``` id="yz9q2g"

✔️ Mostra nome das placas (ex: enp0s3, enp0s8)

---

## ✏️ Editar configuração

```bash
nano interfaces
``` id="r1l0pq"

---

## ➕ Configurar LAN (IP fixo)

Adicionar:

```bash
# LAN (gateway)
allow-hotplug enp0s8
iface enp0s8 inet static
address 192.168.0.1/24
``` id="3sn4i9"

---

### 📌 Explicação

- `enp0s8` → nome da interface (varia por máquina)  
- `static` → IP fixo  
- `192.168.0.1` → gateway da rede interna  

✔️ Geralmente o gateway termina em **.1**

---

## 💾 Salvar e aplicar

- `Ctrl + O` → salvar  
- `Ctrl + X` → sair  

---

## 🔄 Reiniciar rede

```bash
systemctl restart networking

ou

reboot
``` id="9zq0ld"

---

## ✅ Verificar

```bash
ip a
``` id="8hz3dp"

✔️ Interface deve estar **UP**  
✔️ IP configurado deve aparecer  

---

# 🖥️ Configurar Cliente Windows

## 📌 Configuração manual

- IP: `192.168.0.100`  
- Máscara: `255.255.255.0`  
- Gateway: `192.168.0.1`  
- DNS: `192.168.0.1`  

---

## ⚙️ Ajustes

- Desativar IPv6  
- Aplicar configurações  

---

## 🧪 Teste

No CMD:

```bash
ipconfig
ping 192.168.0.1
``` id="0l2f0h"

✔️ Se responder → comunicação OK

---

# ⚠️ Integração com Windows Server

## 📌 Problema

- Windows Server já tem outra rede (ex: `192.168.32.x`)
- Debian está em `192.168.0.x`
- Redes diferentes → não se comunicam

---

## 🛠️ Solução

Alinhar o IP da LAN do Debian com a rede do Windows Server

---

## ✏️ Alterar no Debian

```bash
nano /etc/network/interfaces
``` id="g3x7we"

---

### Alterar para:

```bash
# LAN (gateway)
allow-hotplug enp0s8
iface enp0s8 inet static
address 192.168.32.1/24
``` id="f1k9lm"

---

## 🔄 Aplicar

```bash
systemctl restart networking

ou

reboot
``` id="x7r1pn"

---

## ✅ Verificar

```bash
ip a
``` id="y2p0zz"

✔️ IP deve aparecer corretamente

---

## 🧪 Teste final

No Windows Server:

```bash
ping 192.168.32.1
``` id="u4p8kd"

✔️ Se responder → integração funcionando

---

# 🧠 Entendimento Final

## 📌 O que foi feito

- Criado firewall com Debian  
- Configurada LAN com IP fixo  
- Cliente conectado ao gateway  
- Integração com Windows Server  

---

## ⚡ Resumo Relâmpago (10 linhas)

- Segurança envolve disponibilidade, desempenho e proteção  
- Firewall controla tráfego da rede  
- Debian pode substituir roteador  
- Usa duas interfaces: WAN e LAN  
- LAN recebe IP fixo  
- Cliente usa gateway do Debian  
- Redes precisam estar na mesma faixa  
- Configuração feita no arquivo interfaces  
- Reiniciar rede aplica mudanças  
- Teste é feito com ping  

---

# 📌 Resumo Final (Revisão Rápida)

- Firewall = controle de acesso à rede  
- Debian = solução robusta para firewall  
- IP fixo define gateway da rede  
- Mesma rede = comunicação funciona  
- Testar sempre com ping  

---