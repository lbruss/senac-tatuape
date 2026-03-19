# 🌐 Roteadores — Conceitos e Configuração Básica (Cisco / Packet Tracer)

Os **roteadores** são dispositivos responsáveis por **conectar redes diferentes** e encaminhar os dados entre elas.  
Eles funcionam como **pontes entre redes**, permitindo que dispositivos locais acessem outras redes ou a internet.

**Analogia:**  
Se uma rede local fosse uma cidade, o roteador seria a **rodovia que liga essa cidade ao resto do país**.

---

# 🏠 Roteador Doméstico

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

# 🏢 Roteador Empresarial

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

# 🏗️ Data Center

Um **data center** é um ambiente onde ficam concentrados:

- Servidores
- Roteadores
- Switches
- Sistemas de armazenamento

Esses equipamentos trabalham juntos para manter **sites, sistemas e serviços online**.

**Analogia:**  
Um data center funciona como uma **grande central de operações da internet**, onde milhares de computadores trabalham ao mesmo tempo.

---

# 🔌 Conexões Serial — DCE e DTE

Em algumas redes (especialmente em laboratórios e simulações), roteadores podem se conectar através de **interfaces seriais**.

Existem dois lados:

### 🔹 DCE (Data Communication Equipment)

- É o dispositivo que **fornece o clock da comunicação**
- Controla a velocidade da conexão

### 🔹 DTE (Data Terminal Equipment)

- É o dispositivo que **recebe o clock**
- Apenas participa da comunicação

**Analogia:**  
Imagine uma dança:

- O **DCE** define o ritmo da música  
- O **DTE** dança seguindo esse ritmo

---

# ⚡ Velocidade de Link

Em alguns cenários, links podem ter velocidades específicas.

Exemplo:

256 kbps

Esse tipo de velocidade já foi comum em:

- Conexões dedicadas
- Redes bancárias
- Links antigos de comunicação

---

# 📡 Protocolo de Roteamento — RIP

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

# ⚙️ 5 Passos Básicos para Configurar um Roteador

1️⃣ Definir o **nome do roteador**  
2️⃣ Configurar a **rede LAN**  
3️⃣ Configurar a **rede WAN**  
4️⃣ Definir o **protocolo de roteamento**  
5️⃣ **Salvar a configuração**

---

# 🖥️ Comandos Básicos de Configuração (Cisco)

## 🔐 Entrar no modo privilegiado

```bash
Router> enable


---

⚙️ Entrar no modo de configuração

Router# configure terminal


---

🏷️ Definir o Nome do Roteador

Router(config)# hostname SP

Resultado:

SP(config)#


---

🌐 Configurar Interface LAN

SP(config)# interface fastEthernet 0/0

Adicionar descrição:

SP(config-if)# description REDE_LOCAL

Definir endereço IP:

SP(config-if)# ip address 192.168.0.1 255.255.255.0

Ativar interface:

SP(config-if)# no shutdown

Sair da interface:

SP(config-if)# exit


---

🔗 Configurar Interface WAN (Serial)

SP(config)# interface serial 0/0

Adicionar descrição:

SP(config-if)# description LINK_ENTRE_ROTEADORES

Definir endereço IP:

SP(config-if)# ip address 10.0.0.1 255.255.255.252

Ativar interface:

SP(config-if)# no shutdown

Definir clock (caso seja DCE):

SP(config-if)# clock rate 256000

Definir largura de banda:

SP(config-if)# bandwidth 256

Sair:

SP(config-if)# exit


---

📡 Configurar Protocolo RIP

SP(config)# router rip

Definir redes participantes:

SP(config-router)# network 192.168.0.0
SP(config-router)# network 10.0.0.0

Sair da configuração:

SP(config-router)# end

ou

Ctrl + Z


---

💾 Salvar Configuração

SP# copy running-config startup-config

Isso garante que as configurações não sejam perdidas após reiniciar o roteador.


---

📌 Informação Importante

Sempre que configurar uma interface de rede em roteadores Cisco:

A interface inicia desativada

É necessário usar o comando:


no shutdown

Caso contrário, a interface não funcionará.


---

✅ Conclusão

Os roteadores são fundamentais para a comunicação entre redes.

Eles permitem:

Conectar redes locais à internet

Controlar o fluxo de dados

Definir rotas para os pacotes

Interligar redes diferentes


Aprender a configurar roteadores é uma das habilidades mais importantes em redes de computadores.
