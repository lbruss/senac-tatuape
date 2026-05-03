# Diferença entre Hub e Switch

Em uma rede de computadores, **Hub** e **Switch** são dispositivos usados para conectar vários equipamentos, como computadores, impressoras e servidores.

Apesar de terem funções parecidas, **o funcionamento deles é bem diferente**.

---

## Hub

O **Hub** é um dispositivo antigo usado para conectar vários computadores em uma rede.

Características

- Envia os dados para **todas as portas ao mesmo tempo**
- Não sabe **qual dispositivo é o destino**
- Pode ocorrer **colisão de dados**

Colisão de Rede

Colisão acontece quando **dois computadores enviam dados ao mesmo tempo**, causando interferência.

**Analogia:**  
Imagine uma sala onde alguém grita uma mensagem para todos ao mesmo tempo.  
Mesmo que apenas uma pessoa precise ouvir, **todos recebem a mensagem**.

Isso gera:
- Tráfego desnecessário
- Lentidão na rede

Por isso, o Hub é considerado um dispositivo **simples e limitado**.

---

## Switch

O **Switch** é a evolução do Hub e é muito mais eficiente.

Características

- Identifica **cada dispositivo conectado**
- Envia dados **somente para o destino correto**
- Evita colisões na rede
- Utiliza uma **tabela MAC** para saber onde cada dispositivo está conectado

Tabela MAC

O switch aprende automaticamente qual dispositivo está conectado em cada porta.

**Analogia:**  
Imagine um **porteiro de condomínio** que sabe exatamente em qual apartamento cada morador mora.

Assim, quando chega uma encomenda, ele entrega **diretamente no apartamento correto**, sem incomodar os outros.

---

# Comparação Rápida

| Característica | Hub | Switch |
|---|---|---|
| Inteligência | Muito baixa | Alta |
| Envio de dados | Para todas as portas | Apenas para o destino |
| Colisões | Sim | Muito raras |
| Uso atualmente | Obsoleto | Amplamente utilizado |

---

# Switch Gerenciável

Alguns switches possuem recursos avançados e são chamados de **Switches Gerenciáveis (Managed Switch)**.

Eles permitem:

- Criar **VLANs**
- Monitorar a rede
- Controlar tráfego
- Aplicar segurança

---

# VLAN (Virtual LAN)

A **VLAN** permite dividir uma rede física em **várias redes lógicas**.

Ou seja, mesmo usando o **mesmo switch**, é possível separar redes diferentes.

Exemplo

Uma empresa pode ter:

- **VLAN EDU** → Rede dos alunos  
- **VLAN ADM** → Rede da administração  

Mesmo conectados ao **mesmo switch**, os dispositivos ficam **isolados entre si**.

**Analogia:**  
Imagine um prédio com vários apartamentos.

Mesmo estando no **mesmo prédio**, cada apartamento é **separado** e tem sua própria privacidade.

---

# Comandos Básicos de Switch (Cisco)

Os comandos abaixo são comuns em switches Cisco para configuração.

---

Entrar no modo privilegiado (Admin)

```
switch> enable
````

Resultado:

```
switch#
```

---

Entrar no modo de configuração

```
switch# configure terminal
```

ou

```
switch# conf t
```

Resultado:

```
switch(config)#
```

---

Alterar o nome do Switch

```
switch(config)# hostname SW
```

Resultado:

```
SW(config)#
```

---

Criar uma VLAN

```
SW(config)# vlan X
```
> X = Qualquer número, exceto o 1
---

Nomear a VLAN

```
SW(config-vlan)# name NOMEdaVLAN
```

---

Sair do modo VLAN

Existem três formas:

Comando `end`

```
SW(config-vlan)# end
```

---

Teclas de atalho

```
CTRL + Z
```

---

Comando `exit`

```
SW(config-vlan)# exit
```

---

Ver VLANs configuradas

```
SW# show vlan brief
```

Esse comando mostra:

* VLANs existentes
* Nome da VLAN
* Portas associadas

---

# Colocar uma porta em uma VLAN

Exemplo usando a porta **FastEthernet 0/1**

```
SW(config)# interface f0/1
```

Depois:

```
SW(config-if)# switchport access vlan X 
```
> X = O mesmo número que colocou em "Criar uma VLAN"

Agora essa porta pertence à **VLAN X**.

---

Configurar várias portas ao mesmo tempo

Exemplo: portas **1 até 12**

```
SW(config)# interface range fastEthernet 0/1-12
```

Depois:

```
SW(config-if-range)# switchport access vlan X
```

> X = O mesmo número que colocou em "Criar uma VLAN"

Isso coloca **12 portas na VLAN X de uma vez**.

---

Porta Trunk (Comunicação entre VLANs)

Portas **Trunk** permitem transportar **tráfego de várias VLANs ao mesmo tempo**.

Usado tambem em **cascateamento** (daisy-chaining).

Muito usado para conectar:

* Switch com Switch
* Switch com Roteador
* Switch com Servidor

Configuração

```
SW(config)# interface g0/1
SW(config-if)# switchport mode trunk
```

**Analogia:**
Uma porta trunk funciona como uma **rodovia com várias faixas**, onde cada faixa representa uma VLAN diferente.

---

Ver Configuração Atual

```
SW# show running-config
```

Mostra toda a configuração ativa do switch.

---

Salvar Configuração

Para salvar a configuração permanentemente:

```
SW# write memory
```

ou

```
SW# copy running-config startup-config
```

Isso evita perder as configurações após reiniciar o switch.

Para resetar o Switch, zerar ele:

```
SW# erase startup-config
```

Após esse comando, reinicie:

```
SW# reload
```

---

# Conclusão

Os **switches modernos** são fundamentais para redes atuais porque:

* Evitam colisões
* Melhoram o desempenho
* Permitem segmentação com VLAN
* Possuem recursos avançados de gerenciamento

Por isso, o **Hub praticamente não é mais utilizado em redes modernas**.

---

## Exemplo da execução dos comandos no Cisco Packet Tracer (Mais lento)
* Configurando portas uma por uma
* VLAN **ADM** 42
* VLAN **EDU** 56

```
Switch>
Switch>enable
Switch#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Switch(config)#hostname SW
SW(config)#vlan 42
SW(config-vlan)#name ADM
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#vlan 56
SW(config-vlan)#name EDU
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
                                                Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
                                                Gig0/1, Gig0/2
42   ADM                              active    
56   EDU                              active    
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active    
SW#Configure terminal
SW(config)#interface fastEthernet 0/1
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/2
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/3
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/4
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/5
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/6
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/7
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/8
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/9
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/10
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/11
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/12
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/13
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/14
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/15
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/16
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/17
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/18
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/19
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/20
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/21
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/22
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/23
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/24
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#exit
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief 

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Gig0/1, Gig0/2
42   ADM                              active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
56   EDU                              active    Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active    
SW#write memory
SW#
```
---

## Exemplo da execução dos comandos no Cisco Packet Tracer (Mais rápido)
* VLAN **ADM** 42
* VLAN **EDU** 56
* Comandos para configurar várias portas ao mesmo tempo

```
Switch>
Switch>enable
Switch#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Switch(config)#hostname SW
SW(config)#vlan 42
SW(config-vlan)#name ADM
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#vlan 56
SW(config-vlan)#name EDU
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
                                                Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
                                                Gig0/1, Gig0/2
42   ADM                              active    
56   EDU                              active    
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active  
SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#interface range fastEthernet 0/1-12
SW(config-if-range)#switchport access vlan 42
SW(config-if-range)#exit
SW(config)#interface range fastEthernet 0/13-24
SW(config-if-range)#switchport access vlan 56
SW(config-if-range)#exit
SW(config)#exit
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief 

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Gig0/1, Gig0/2
42   ADM                              active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
56   EDU                              active    Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active
SW#write memory
SW#
```

---

# Spanning Tree Protocol (STP)

## O que é
O **Spanning Tree Protocol (STP)** é um protocolo de rede usado em **switches** para evitar **loops de rede** em redes Ethernet.

## Por que ele é necessário
Quando existem **vários caminhos entre switches**, podem ocorrer **loops** (dados circulando infinitamente na rede).  
Isso causa problemas como:

- Congestionamento da rede
- Pacotes duplicados
- Queda de desempenho

O **STP resolve isso bloqueando caminhos redundantes**, deixando apenas **um caminho ativo** entre os dispositivos.

## Como funciona (de forma simples)
O STP cria uma **estrutura em forma de árvore**, onde:

1. Um switch é escolhido como **Root Bridge (switch principal)**.
2. O protocolo calcula **o melhor caminho** até esse switch.
3. Caminhos extras são **bloqueados** para evitar loops.
4. Se o caminho principal falhar, o STP **ativa um caminho alternativo automaticamente**.

## Analogia simples
Imagine uma **cidade com várias ruas entre dois lugares**.

- Se todas as ruas ficarem abertas ao mesmo tempo, pode acontecer **trânsito circulando em círculos**.
- O STP **fecha algumas ruas temporariamente** para que o tráfego siga **um caminho organizado**.
- Se a rua principal fechar, **outra rua é aberta automaticamente**.

## Vantagens
- Evita loops de rede
- Mantém a rede estável
- Permite redundância (caminhos de backup)

## Desvantagem
- Pode demorar alguns segundos para reorganizar a rede quando ocorre uma falha.

## Conclusão
O **STP** é essencial em redes com **vários switches conectados**, pois **organiza os caminhos da rede e evita loops**, garantindo que os dados trafeguem de forma correta.

---

# Segurança e Configurações no Switch

## Senha de Acesso ao Modo Privilegiado

O modo privilegiado (`enable`) dá acesso total ao switch, por isso precisa ser protegido.

---

Método Menos Seguro

```
enable
configure terminal
enable password SUASENHA
end
write memory
```

A senha fica armazenada de forma menos protegida

---

Método Mais Seguro (Recomendado)

```
enable
configure terminal
enable secret SUASENHA
end
write memory
```

A senha é armazenada de forma criptografada


Analogia:

enable password → senha escrita em papel

enable secret → senha guardada em um cofre

---

**Remover Senha**

Se usou enable password:


```
enable
configure terminal
no enable password
end
write memory
reload
```

---

Se usou enable secret:

```
enable
configure terminal
no enable secret
end
write memory
reload
```

---

## Senha no Console (Acesso Físico)

Protege o acesso quando alguém conecta um cabo console ao switch.

```
enable
configure terminal
line console 0
password SUASENHA
login
end
write memory
```

Analogia:
É como colocar uma senha na porta de entrada física do equipamento.

---

**Atalho Importante**

Se o terminal travar durante comandos:

Ctrl + Shift + 6

Interrompe processos (ex: ping travado)

---

# EtherChannel (Link Aggregation)

O EtherChannel permite juntar várias portas físicas em uma única conexão lógica.

---

**Vantagens**

Aumenta a velocidade

Melhora a estabilidade

Cria redundância (se um cabo falhar, outro assume)


Analogia:
É como transformar várias ruas em uma avenida larga, permitindo mais fluxo de carros (dados).

---

# Configuração do EtherChannel

* Switch 1

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode active
end
write memory
```

---

* Switch 2

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode passive
end
write memory
```

---

# Protocolos do EtherChannel

* LACP (Link Aggregation Control Protocol)

Padrão aberto (IEEE 802.3ad / 802.1AX)

Funciona com diversas marcas

---

* PAgP (Port Aggregation Protocol)

Proprietário da Cisco

Funciona apenas em equipamentos Cisco

---

## Verificar Configuração

```
show etherchannel summary
```

ou

```
show interfaces etherchannel
```

Esses comandos mostram:

* Portas agregadas

* Status do canal

* Tipo de protocolo usado

---

**Informação Adicional**

Para o EtherChannel funcionar corretamente, as interfaces devem ter:

* Mesma velocidade

* Mesmo duplex

* Mesma VLAN (em access)

* Mesma configuração trunk (se for trunk)


Caso contrário, o canal pode não funcionar corretamente.

---

# Conclusão

Com essas configurações você consegue:

Proteger o switch com senha segura

Controlar acesso físico via console

Utilizar agregação de links para melhorar desempenho


Esses recursos são essenciais para redes mais seguras, rápidas e profissionais.

---

# Roteadores — Conceitos e Configuração Básica (Cisco / Packet Tracer)

Os **roteadores** são dispositivos responsáveis por **conectar redes diferentes** e encaminhar os dados entre elas.  
Eles funcionam como **pontes entre redes**, permitindo que dispositivos locais acessem outras redes ou a internet.

**Analogia:**  
Se uma rede local fosse uma cidade, o roteador seria a **rodovia que liga essa cidade ao resto do país**.

---

## Roteador Doméstico

O **roteador doméstico** é usado em casas e pequenos escritórios.

### Funções principais

- Compartilhar internet entre vários dispositivos
- Criar uma **rede local (LAN)**
- Fazer **NAT** (tradução de endereços)
- Distribuir IP automaticamente (**DHCP**)
- Fornecer Wi-Fi

Exemplo de dispositivos conectados:

- Computador
- Notebook
- Celular
- Smart TV
- Impressora

Todos usam o **mesmo acesso à internet** através do roteador.

---

## Roteador Empresarial

Os **roteadores empresariais** são mais robustos e possuem recursos avançados.

### Características

- Suportam **mais redes e usuários**
- Possuem **interfaces diferentes (Ethernet, Serial, Fiber)**
- Permitem **configuração manual detalhada**
- Utilizam **protocolos de roteamento**

Eles são comuns em:

- Empresas
- Universidades
- Provedores de internet
- **Data centers**

---

## Data Center

Um **data center** é um ambiente onde ficam concentrados:

- Servidores
- Roteadores
- Switches
- Sistemas de armazenamento

Esses equipamentos trabalham juntos para manter **sites, sistemas e serviços online**.

**Analogia:**  
Um data center funciona como uma **grande central de operações da internet**, onde milhares de computadores trabalham ao mesmo tempo.

---

## Conexões Serial — DCE e DTE

Em algumas redes (especialmente em laboratórios e simulações), roteadores podem se conectar através de **interfaces seriais**.

Existem dois lados:

**DCE (Data Communication Equipment)**

- É o dispositivo que **fornece o clock da comunicação**
- Controla a velocidade da conexão

**DTE (Data Terminal Equipment)**

- É o dispositivo que **recebe o clock**
- Apenas participa da comunicação

**Analogia:**  
Imagine uma dança:

- O **DCE** define o ritmo da música  
- O **DTE** dança seguindo esse ritmo

---

## Velocidade de Link

Em alguns cenários, links podem ter velocidades específicas.

Exemplo:

256 kbps

Esse tipo de velocidade já foi comum em:

- Conexões dedicadas
- Redes bancárias
- Links antigos de comunicação

---

## Protocolo de Roteamento — RIP

O **RIP (Routing Information Protocol)** é um dos protocolos de roteamento mais antigos.

### Características

- Fácil de configurar
- Compatível com muitos roteadores
- Baseado em **número de saltos (hops)**

**Analogia:**  
É como escolher o caminho com **menos cruzamentos** para chegar ao destino.

Embora ainda seja usado para estudo, hoje existem protocolos mais avançados, como:

- **OSPF**
- **EIGRP**
- **BGP**

---

## 5 Passos Básicos para Configurar um Roteador

1. Definir o **nome do roteador**  
2. Configurar a **rede LAN**  
3. Configurar a **rede WAN**  
4. Definir o **protocolo de roteamento**  
5. **Salvar a configuração**

---

# Comandos de Configuração no Roteador 1 (Cisco)

**Entrar no modo privilegiado**

```
Router> enable
```

---

**Entrar no modo de configuração**

```
Router# configure terminal
```

---

**Definir o Nome do Roteador**

```
Router(config)# hostname SP 
```

Resultado:

```
SP(config)#
```

---

**Configurar Interface LAN**

```
SP(config)# interface fastEthernet 0/0
```

**Adicionar descrição:**

```
SP(config-if)# description REDE_LOCAL
```

**Definir endereço IP:**

```
SP(config-if)# ip address 192.168.0.1 255.255.255.0
```

**Ativar interface:**

```
SP(config-if)# no shutdown
```

**Sair da interface:**

```
SP(config-if)# exit
```

---

**Configurar Interface WAN (Serial)**

```
SP(config)# interface serial 0/0
```

**Adicionar descrição:**

```
SP(config-if)# description LINK_ENTRE_ROTEADORES
```

**Definir endereço IP:**

```
SP(config-if)# ip address 10.0.0.1 255.255.255.252
```

**Ativar interface:**

```
SP(config-if)# no shutdown
```

**Definir clock (caso seja DCE):**

```
SP(config-if)# clock rate 256000
```

***Definir largura de banda:**

```
SP(config-if)# bandwidth 256
```

**Sair:**

```
SP(config-if)# exit
```

---

**Configurar Protocolo RIP**

```
SP(config)# router rip
```

**Definir redes participantes:**

```
SP(config-router)# network 192.168.0.0
```

```
SP(config-router)# network 10.0.0.0
```

**Sair da configuração:**

```
SP(config-router)# end
```

ou

```
Ctrl + Z
```

---

**Salvar Configuração**

```
SP# copy running-config startup-config
```

Isso garante que as configurações não sejam perdidas após reiniciar o roteador.

---

# Comandos de Configuração no Roteador 2 (Cisco)

**Entrar no modo privilegiado**

```
Router> enable
```

---

**Entrar no modo de configuração**

```
Router# configure terminal
```

---

**Definir o Nome do Roteador**

```
Router(config)# hostname RJ
```

Resultado:

```
RJ(config)#
```

---

**Configurar Interface LAN**

```
RJ(config)# interface fastEthernet 0/1
```

**Adicionar descrição:**

```
RJ(config-if)# description QUALQUERUMASEQUISER
```

**Definir endereço IP:**

```
RJ(config-if)# ip address 192.168.10.24 255.255.255.0
```

**Ativar interface:**

```
RJ(config-if)# no shutdown
```

**Sair da interface:**

```
RJ(config-if)# exit
```

---

**Configurar Interface WAN (Serial)**

```
RJ(config)# interface serial 0/1
```

**Adicionar descrição:**

```
RJ(config-if)# description QUALQUERUMSEQUISER
```

**Definir endereço IP:**

```
RJ(config-if)# ip address 20.0.0.1 255.0.0.0
```

**Ativar interface:**

```
RJ(config-if)# no shutdown
```

**Definir clock (caso seja DCE):**

```
SP(config-if)# clock rate 256000
```

***Definir largura de banda:**

```
RJ(config-if)# bandwidth 256
```

**Sair:**

```
RJ(config-if)# exit
```

---

**Configurar Protocolo RIP**

```
RJ(config)# router rip
```

**Definir redes participantes:**

```
RJ(config-router)# network 192.168.0.0
```

```
RJ(config-router)# network 20.0.0.0
```

**Sair da configuração:**

```
RJ(config-router)# end
```

ou

```
Ctrl + Z
```

---

**Salvar Configuração**

```
RJ# copy running-config startup-config
```

---

**Informação Importante**

Sempre que configurar uma interface de rede em roteadores Cisco:

A interface inicia desativada

É necessário usar o comando:

```
no shutdown
```

Caso contrário, a interface não funcionará.


---

# Conclusão

Os roteadores são fundamentais para a comunicação entre redes.

Eles permitem:

Conectar redes locais à internet

Controlar o fluxo de dados

Definir rotas para os pacotes

Interligar redes diferentes

---
