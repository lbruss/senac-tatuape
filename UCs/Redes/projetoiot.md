# DIA 1 (11/03/26)

## Projeto IoT com Arduino – Documentação Parcial (Dia 1 – 11/03/2026)

***

**Integrantes do grupo:**

*   Bruss Loza
*   Ezequiel
*   Daniel Vieira

***

# 1. Objetivo (Parcial)

Iniciar o desenvolvimento de um projeto envolvendo **Arduino e Internet das Coisas (IoT)**, realizando:

1.  Identificação e preparação dos componentes
2.  Conexão física da placa e módulos
3.  Configuração de rede (LAN, DHCP, Reserva de IP)
4.  Testes de comunicação entre computador ↔ Arduino
5.  Primeiros códigos com comunicação serial e Ethernet

***

# 2. Equipamentos Utilizados

### Placas e Módulos

*   **Arduino UNO R3** – placa principal do projeto (microcontrolador ATmega328P)  
![Imagem7](https://github.com/user-attachments/assets/ff90aa46-99ad-4986-911c-0ddb2cc9b33c)

*   **Ethernet Shield W5100** – módulo para conectar o Arduino à rede via cabo  
![Imagem6](https://github.com/user-attachments/assets/7390ad2c-d002-47f7-8c0b-b4c2f74ca438)

### Cabos e Conexões

*   Cabo USB Tipo B (para programar o Arduino)
*   Cabos de rede (Ethernet)
*   Roteador Wi‑Fi com portas LAN e WAN

***

# 3. Programação Inicial – Arduino IDE

Foi aberta e utilizada a interface do **Arduino IDE 2.2.6**.  
A IDE possui duas funções principais em todo código:

*   `setup()` – executa 1 vez ao iniciar
*   `loop()` – executa repetidamente

![Imagem3](https://github.com/user-attachments/assets/379069da-f966-4ed2-8a92-d92a34c9fb97)

Primeiro código executado:

```cpp
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {}
```

*Esse código serve para testar a comunicação entre a placa e o computador via Serial Monitor.*

***

# 4. Primeiro Teste no Arduino + Simulação no Tinkercad

O mesmo código foi executado:

*   no **Arduino real**
*   no **Tinkercad** (simulação virtual do Arduino)

![Imagem4](https://github.com/user-attachments/assets/22b98c52-6242-483f-8e68-27e4fa5b6098)

Depois, o Tinkercad foi fechado e não foi mais utilizado hoje.

***

# 5. Teste de Comunicação Serial Repetida

Foi modificado o código para enviar repetidamente “Hello World”:

```cpp
void loop() {
  Serial.println("Hello World");
}
```

O Serial Monitor mostrou a saída contínua, confirmando funcionamento da porta serial.

![Imagem5](https://github.com/user-attachments/assets/4a131c3b-2f20-48a0-9db0-d1dc8004ec52)

***

# 6. Montagem de Rede Física – Arduino + Roteador + PC

Nesta etapa:

*   O **Ethernet Shield** foi encaixado no Arduino
*   Cabo Ethernet conectou o Arduino ao roteador
*   Outro cabo conectou o PC ao roteador
*   O roteador foi conectado à **rede do SENAC** pela porta WAN

![Imagem8](https://github.com/user-attachments/assets/be11bbf1-173d-4fbd-96c4-0dcba9857682)

Essa estrutura permitiu iniciar a parte **IoT**, colocando o Arduino dentro da rede local.

***

# 7. Obtenção de IP, Máscara, Gateway e DNS (via DHCP)

Foi carregado um código que exibe as informações de rede:

```cpp
Serial.println(Ethernet.localIP());
Serial.println(Ethernet.subnetMask());
Serial.println(Ethernet.gatewayIP());
Serial.println(Ethernet.dnsServerIP());
```

![Imagem9](https://github.com/user-attachments/assets/db9a877b-57da-4b65-9b29-ee21ff22268d)

O Arduino recebeu automaticamente um IP via DHCP do roteador.

***

# 8. Visualização das Configurações de Rede no Serial Monitor

No Serial Monitor apareceram:

*   IP do Arduino
*   Máscara de sub-rede
*   Gateway
*   DNS

![Imagem10](https://github.com/user-attachments/assets/8eedf45e-065f-4b0b-80f3-c2b336349123)

Isso confirmou que o Arduino **entrou na rede** com sucesso.

***

# 9. Reserva de IP no Roteador + Teste de Ping

Nesta etapa, no painel do roteador foi configurada uma **reserva DHCP** para que o Arduino sempre tenha o mesmo IP.

Depois, no CMD do Windows, foi executado:

    ping 192.168.0.100

O Arduino respondeu a todos os pacotes, confirmando comunicação perfeita.

![Imagem11](https://github.com/user-attachments/assets/0eb3cd5c-f388-44f5-9847-ada86a6faca5)

***

# Conclusão Parcial do Dia (11/03/2026)

Hoje o nosso grupo:

*   Preparou os componentes
*   Programou o Arduino
*   Testou comunicação Serial
*   Montou rede local com roteador
*   Conectou o Arduino à rede via Ethernet
*   Obteve IP, máscara, gateway e DNS
*   Configurou reserva DHCP
*   Testou comunicação via ping

***
