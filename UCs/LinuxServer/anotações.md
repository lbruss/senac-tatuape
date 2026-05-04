# Segurança de Redes + Firewall com Debian

**Visão Geral**

Segurança de redes envolve garantir:

- **Disponibilidade** → sistema sempre acessível  
- **Desempenho** → funcionamento eficiente  
- **Confidencialidade** → evitar roubo de dados  

---

## Firewall

O **firewall** é um sistema que controla o tráfego entre redes.

- Fica entre:
  - Internet (rede externa)
  - Rede interna (privada)

> **Analogia:**  
É como uma **porta com segurança**: decide quem entra, quem sai e o que pode passar.

---

# Debian como Firewall

**Ideia**

Usar um servidor com **Debian Linux** como firewall da rede.

- Substitui um roteador doméstico  
- Mais controle e segurança  
- Ideal para ambiente corporativo  

---

**Cenário da Rede**

- Debian Server → Firewall  
- Windows Server → AD, DHCP, DNS  
- Ambos conectados no mesmo **switch**

---

## Interfaces de Rede

O Debian terá **2 placas de rede**:

1. **WAN (Internet)**
   - Modo: NAT  
2. **LAN (Rede interna)**
   - Modo: Rede interna  

> **Analogia:**  
- WAN = porta para o mundo  
- LAN = porta para a empresa  

---

# Instalação Inicial do Debian

**Instalar com:**

- Sistema básico  
- SSH ativado  

---

##  Instalar pacotes úteis

```
apt install vim
```

```
apt install linuxlogo
```

---

**Personalização**

```
cd /etc
```

```
cat issue.linuxlogo > issue
```

- Exibe logo no terminal

---

# Configuração de Rede

**Acessar diretório**

```
cd /etc/network
```

---

**Backup do arquivo**

```
cp interfaces interfaces.bkp
```

- Evita perda de configuração

---

**Ver interfaces**

```
ip a
```

- Mostra nome das placas (ex: enp0s3, enp0s8)

---

**Editar configuração**

```
nano interfaces
```

---

## Configurar LAN

Adicionar:

```
# LAN (gateway)
allow-hotplug enp0s8
iface enp0s8 inet static
address 192.168.0.1/24
```

---

**Explicação**

- `enp0s8` → nome da interface (varia por máquina)  
- `static` → IP fixo  
- `192.168.0.1` → gateway da rede interna  

- Geralmente o gateway termina em **.1**

---

**Salvar e aplicar**

- `Ctrl + O` → salvar  
- `Ctrl + X` → sair  

---

**Reiniciar rede**

```
systemctl restart networking
```

ou

```
reboot
```

---

**Verificar**

```
ip a
```

- Interface deve estar **UP**  
- IP configurado deve aparecer  

---

# Configurar Cliente Windows

**Configuração manual**

- IP: `192.168.0.100`  
- Máscara: `255.255.255.0`  
- Gateway: `192.168.0.1`  
- DNS: `192.168.0.1`  

---

**Ajustes**

- Desativar IPv6  
- Aplicar configurações  

---

## Teste

No CMD:

```
ipconfig
```

```
ping 192.168.0.1
```

- Se responder → comunicação OK

---

# Integração com Windows Server

**Problema**

- Windows Server já tem outra rede (ex: `192.168.32.x`)
- Debian está em `192.168.0.x`
- Redes diferentes → não se comunicam

---

**Solução**

Alinhar o IP da LAN do Debian com a rede do Windows Server

---

## Alterar no Debian

```
nano /etc/network/interfaces
```

---

### Alterar para:

```
# LAN (gateway)
allow-hotplug enp0s8
iface enp0s8 inet static
address 192.168.32.1/24
```

---

**Aplicar**

```
systemctl restart networking
```

ou

```
reboot
```

---

**Verificar**

```
ip a
```

- IP deve aparecer corretamente

---

**Teste final**

No Windows Server:

```
ping 192.168.32.1
```

- Se responder → integração funcionando

---

## O que foi feito

- Criado firewall com Debian  
- Configurada LAN com IP fixo  
- Cliente conectado ao gateway  
- Integração com Windows Server  

---

**Resumo Relâmpago**

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

# Resumo Final

- Firewall = controle de acesso à rede  
- Debian = solução robusta para firewall  
- IP fixo define gateway da rede  
- Mesma rede = comunicação funciona  
- Testar sempre com ping  

---