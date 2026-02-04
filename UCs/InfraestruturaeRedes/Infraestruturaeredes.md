# Explicação dos Comandos Cisco (CLI)

Esses comandos são usados para **configurar um roteador Cisco**, normalmente no **Cisco Packet Tracer** ou em um **roteador Cisco real** via **CLI (Command Line Interface)**.  
Abaixo está a explicação **clara, direta e simples**, linha por linha.

---

## Início do Roteador

```
Would you like to enter the initial configuration dialog? [yes/no]: no
```
- O roteador pergunta se você quer usar o assistente automático.

- Ao responder no, você escolhe configurar tudo manualmente.

---

```
Press RETURN to get started!
```
- Apenas pede para pressionar Enter para começar.

---

## Modos do Roteador (Importante)

| ***Modo***           | ***Exemplo***          | ***Função*** |
|----------------------|------------------------|----------|
| Usuário              | Router>                | Acesso limitado |
| Privilegiado         | Router#                | Acesso administrativo |
| Configuração global  | Router(config) #       | Configurar o roteador |
| Linha                | Router(Config-line) #  | Console ou acesso remoto |
| Interface            | Router(config-if) #    | Porta de rede |

---

## Entrando no Modo Administrador

```
Router>enable
```

- Entra no modo privilegiado (admin).

```
Router#
```

---

## Entrando no Modo de Configuração

```
Router#configure terminal
```
- Permite alterar configurações do roteador.

```
Router(config)#
```

---

## Criando Usuário Administrador

```
Router(config)#username (nome qualquer) privilege 15 secret (senha qualquer)
```
- Cria o usuário com nome qualquer
- privilege 15 → nível máximo (administrador)
- secret → senha criptografada

---

## Configurando Acesso pelo Console

```
Router(config)#line console 0

```
- Entra na configuração do console físico.
```
Router(config-line)#login local
```
- Usa os usuários locais para login.

```
Router(config-line)#exit
```
- Sai da configuração da linha.

```
Router(config)#exit
```
- Sai da configuração global.

---

## Salvando a Configuração
```
Router#write memory
```
- Salva as configurações na memória permanente (NVRAM).
- Sem isso, tudo se perde ao desligar o roteador.

---

## Login com Usuário Criado

```
User Access Verification
Username: cliente
Password:
```
- Login usando o usuário configurado.

---

## Mudando o Nome do Roteador
```
Router(config)#hostname (Qualquer nome)
```

- Altera o nome do roteador.
- Facilita a identificação na rede.

---

## Configurando Interface de Rede
```
ROperadora(config)#interface gigabitEthernet 0/0
```
- Entra na configuração da porta física.

```
ROperadora(config-if)#ip address 192.168.0.2 255.255.255.0
```
- Define o IP do roteador.
- Esse IP será o gateway da rede.

```
ROperadora(config-if)#no shutdown
```
- Liga a interface (por padrão vem desligada).

```
Interface GigabitEthernet0/0, changed state to up
```
- Confirma que a porta está ativa.

---

## Configurando DHCP

**Excluindo IP do Roteador**
```
ROperadora(config)#ip dhcp excluded-address 192.168.0.2
```
- Impede que o DHCP entregue o IP do roteador.

---

**Criando Pool DHCP**
```
ROperadora(config)#ip dhcp pool (Qualquer nome)
```
- Cria um pool DHCP com o nome que quiser.

```
ROperadora(dhcp-config)#network 192.168.0.0 255.255.255.0
```
- Define a rede que receberá IP automaticamente.

```
ROperadora(dhcp-config)#default-router 192.168.0.2
```
- Define o gateway padrão dos clientes.

```
ROperadora(dhcp-config)#dns-server 8.8.8.8
```
- Define o servidor DNS.
- 8.8.8.8 → DNS público do Google.

---

## Resumo Geral

Esse conjunto de comandos:

- Cria usuário administrador

- Protege o acesso ao roteador

- Configura IP na interface

- Liga a porta de rede

- Ativa o DHCP

- Distribui IP automaticamente

- Define gateway e DNS

**O roteador está pronto para funcionar como gateway e servidor DHCP da rede.**



# Exemplo: 
```
Would you like to enter the initial configuration dialog? [yes/no]: no
Press RETURN to get started!

Router>
Router>enable
Router#configure terminal
Enter configuration commands, one per lin. End with CNTL/Z
Router(config) #username cliente privilegie 15 secret 123456
Router(config) #line console 0
Router(config-line) #login local
Router(config-line) #exit
Router(config) #exit
Router#write memory
Router#exit

Router con0 is now available

Press RETURN to get started

User Access Verification

Username: cliente
Password: 

Router#configure terminal
Enter configuration commands, one per lin. End with CNTL/Z
Router(config) #hostname ROperadora
ROperadora(config) #interface gigabitEthernet 0/0
ROperadora(config-if) #ip address 192.168.0.2 255.255.255.0
ROperadora(config-if) #no shutdown

ROperadora(config-if) #
LINK-5-CHANGED: Interface GigabitEthernet0/0, changed state to up

LINEPROTO-5-UPDOWN: Line protocol on Interface GigabitEthernet0/0, changed state to up

ROperadora(config-if) #exit
ROperadora(config) #ip dhcp excluded-address 192.168.0.2
ROperadora(config) #ip dhcp pool operadora
ROperadora(dhcp-config) #network 192.168.0.0 255.255.255.0
ROperadora(dhcp-config) #default-router 192.168.0.2
ROperadora(dhcp-config) #dns-server 8.8.8.8
ROperadora(dhcp-config) #
```





























