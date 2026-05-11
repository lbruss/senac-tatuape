# NAT, DNSMasq e Bloqueio de Sites

**Visão Geral**

Aqui o Debian passa a funcionar como:

- Firewall
- Gateway de internet
- Servidor DNS
- Filtro de sites

> **Ideia central:**  
O Windows passa a acessar a internet através do Debian, e o Debian controla o tráfego.

---

# Configurar Windows para usar o Debian

**Alterar IP manualmente**

No Windows:

1. Botão direito no ícone de rede
2. **Configurações de Rede e Internet**
3. **Configurações avançadas de rede**
4. Ethernet → **Editar**

---

**Configurar IPv4**

Exemplo:

| Configuração | Valor |
|---|---|
| IP | 192.168.32.100 |
| Máscara | 255.255.255.0 |
| Gateway | 192.168.32.1 |
| DNS | 192.168.32.1 |

---

* Teste

No CMD:

```
ping 192.168.32.1
``` 

* Se responder → comunicação funcionando

---

## Instalar DNSMasq

**O que é DNSMasq?**

Ferramenta leve que fornece:

- DNS
- Cache DNS
- DHCP (opcional)

> **Analogia:**  
Ele funciona como um “tradutor” de nomes da internet.

---

**Instalação**

```
apt install dnsmasq
```

---

* Verificar status

```
systemctl status dnsmasq
```

---

**Backup da configuração**

```
cd /etc
```

```
mv dnsmasq.conf dnsmasq.conf.bkp
```

---

**Criar nova configuração**

```
nano dnsmasq.conf
```

---

## Configuração LAN

Adicionar:

```
#LAN
interface=enp0s8
bind-interfaces
```

---

**Explicação**

- `interface=` → define placa usada
- `bind-interfaces` → força escuta apenas nessa interface

---

## Configuração DNS

Adicionar:

```
#DNS
listen-address=192.168.32.1
server=8.8.8.8
server=8.8.4.4
cache-size=1000
```

---

**Explicação**

- `listen-address` → IP do servidor DNS
- `server=` → DNS externos (Google)
- `cache-size` → melhora velocidade de consultas

---

**Reiniciar DNSMasq**

```
systemctl restart dnsmasq
systemctl status dnsmasq
```

* Sem erro = funcionando

---

# Ativar NAT

**O que é NAT?**

NAT (**Network Address Translation**) permite:

- Vários PCs compartilharem a mesma internet

> **Analogia:**  
É como um recepcionista que traduz pedidos internos para o mundo externo.

---

**Habilitar encaminhamento IPv4**

* Ver regras

```
sysctl --system
```

---

**Editar configuração**

```
cd /etc/sysctl.d
```

```
nano sysctl.conf
```

---

**Adicionar**

```
#NAT
net.ipv4.ip_forward=1
```

---

**Explicação**

Ativa roteamento de pacotes IPv4.

* Sem isso, o Debian não encaminha internet

---

**Aplicar**

```
sysctl --system
```

---

# NFTables (Firewall)

**O que é?**

Sistema moderno de firewall do Linux.

Substitui:
- iptables

---

**Verificar status**

```
systemctl status nftables
```

---

## Ativar firewall

```
systemctl start nftables
```

```
systemctl enable nftables
```

---

* Conferir

```
systemctl status nftables
```

---

## Ver regras do firewall

```
nft list ruleset
```

---

**Backup da configuração**

```
cd /etc
```

```
cp nftables.conf nftables.conf.bkp
```

---

## Editar firewall

```
nano nftables.conf
```

---

# Configuração NAT no Firewall

Adicionar ao final:

```
table ip nat {
    chain postrouting {
        type nat hook postrouting priority 100;
        policy accept;
        oif "enp0s3" masquerade;
    }
}
```

---

**Explicação**

- `oif` → interface de saída para internet
- `masquerade` → faz tradução NAT automaticamente

---

**Importante**

`enp0s3` muda conforme a máquina.

Sempre verificar com:

```
ip a
```

---

## Reiniciar firewall

```
systemctl restart nftables
```

```
systemctl status nftables
```

```
nft list ruleset
```

---

# Resultado

Windows agora usa internet através do Debian

---

# Bloqueio de Sites (Blacklist DNS)

**Conceito**

Bloqueio via DNS:

- Quando usuário tenta acessar o site
- DNS responde com endereço inválido

---

## Criar blacklist

```
cd /etc/dnsmasq.d
```

```
nano blacklist.conf
```

---

**Adicionar**

```
#Lista negra
address=/netflix.com/0.0.0.0
address=/facebook.com/0.0.0.0
```

---

**Explicação**

- `0.0.0.0` = endereço inválido
- Site não abre

---

## Vincular blacklist ao DNSMasq

Editar:

```
nano /etc/dnsmasq.conf
```

---

* Adicionar

```
#Blacklist
domain-needed
conf-file=/etc/dnsmasq.d/blacklist.conf
```

---

## Reiniciar serviço

```
systemctl restart dnsmasq
```

```
systemctl status dnsmasq
```

---

# Integrar com Windows Server

**Objetivo**

Fazer o AD usar o Debian como saída DNS/internet.

---

## Configurar DNS no Windows Server

**Passo a passo**

1. Configurações de rede
2. Adaptador (ex: NICBruss)
3. IPv4 → Propriedades

---

**Configurar DNS**

Exemplo:

```
192.168.32.10
```

* DNS do próprio servidor AD

---

## Configurar Encaminhador DNS

**Caminho**

1. Gerenciador do Servidor
2. DNS
3. Botão direito no servidor
4. Propriedades
5. Aba:
   - **Encaminhadores**

---

**Configurar**

- Desmarcar:
  - “Usar dicas de raiz...”

- Remover DNS inválidos

- Adicionar:

192.168.32.1

* Debian vira saída DNS da rede

---

# Verificar DHCP

No DHCP:

- IPv4
- Escopo
- Opções de escopo

---

## Conferir:

- Gateway → termina em `.1`
- DNS → termina em `.10`

---

# Teste Final

Tentar acessar:

- Netflix
- Facebook

* Se bloquear → configuração funcionando

---

**Resumo Relâmpago**

- Debian virou gateway da rede  
- DNSMasq fornece DNS  
- NAT compartilha internet  
- ip_forward ativa roteamento  
- NFTables faz firewall/NAT  
- Windows usa Debian como gateway  
- DNS pode bloquear sites  
- Blacklist usa 0.0.0.0  
- Windows Server encaminha DNS ao Debian  
- Teste final é acessar sites bloqueados  

---

# Resumo Final

- Debian = firewall + gateway + DNS  
- DNSMasq resolve nomes e bloqueia sites  
- NAT compartilha internet  
- NFTables controla tráfego  
- Blacklist bloqueia domínios  
- Windows Server encaminha consultas ao Debian  

---