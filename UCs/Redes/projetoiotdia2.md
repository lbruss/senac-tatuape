# DIA 2 (13/03/26)

## **Laboratório de IoT com Arduino – Documentação Parcial (Dias 1 e 2 - 11,13/03/2026)**

**Integrantes do grupo:**

*   Bruss Loza
*   Daniel
*   Ezequiel

**Professor:**

* José de Assis

***

# **Dia 1 – 11/03/2026**

***

# 1. Objetivo (Parcial)

Iniciar um projeto IoT com Arduino, envolvendo:

*   montagem de rede local
*   configuração de roteador
*   primeiros códigos de comunicação serial
*   utilização do Ethernet Shield
*   obtenção de IP via DHCP
*   testes de comunicação na rede
*   preparação para servidor web

***

# 2. Equipamentos Utilizados

### Placas e Módulos

*   **Arduino UNO R3**
![Imagem7](https://github.com/user-attachments/assets/64dbc69e-243a-4765-b262-16e259623c3f)

*   **Ethernet Shield W5100**
![Imagem6](https://github.com/user-attachments/assets/e82e2251-982f-48c8-b1a3-7227bc07205b)

### Sensores

*   HC-SR04
*   DHT11
*   LDR

### Acessórios

*   Protoboard
*   LEDs
*   Cabos jumper
*   Cabo USB-B
*   2 Cabos de rede
*   Roteador Wi-Fi

![Imagem2](https://github.com/user-attachments/assets/e5a597b7-52ee-41af-a5ca-06c306af2700)

***

# 3. Primeiros Testes no Arduino IDE

A interface do **Arduino IDE 2.2.6** foi aberta e explicada:

*   `setup()` → roda uma vez
*   `loop()` → roda para sempre

![Imagem3](https://github.com/user-attachments/assets/c7043249-cc29-4ccb-a956-b6b8f0cb8c5d)

Primeiro código:

```cpp
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {}
```

***

# 4. Teste no Tinkercad e no Arduino Real

O código foi testado:

*   No simulador Tinkercad
*   No Arduino físico

![Imagem4](https://github.com/user-attachments/assets/8f476d79-1c49-4746-9506-96c1c7a5865d)

![Imagem5](https://github.com/user-attachments/assets/eebafb01-bf19-4724-9e1c-d14d168f9d5f)

O Arduino enviou repetidamente:

    Hello World

***

# 5. Montagem da Rede IoT

A rede foi montada assim:

*   Arduino + Ethernet Shield → Roteador
*   PC → Roteador
*   Roteador → Internet (rede SENAC)

![Imagem8](https://github.com/user-attachments/assets/388937c8-85de-4aa0-a6f8-6e6cfc3db255)

***

# 6. Código para Obter IP, Máscara, Gateway e DNS

Código executado:

```cpp
Serial.println(Ethernet.localIP());
Serial.println(Ethernet.subnetMask());
Serial.println(Ethernet.gatewayIP());
Serial.println(Ethernet.dnsServerIP());
```

![Imagem9](https://github.com/user-attachments/assets/322436c0-e06c-411d-9aff-5fd54605058a)

Saída no Serial Monitor:

![Imagem10](https://github.com/user-attachments/assets/5f039468-3df1-4912-adbd-4545c30b84a5)

***

# 7. Configuração do Roteador + Ping

Foi feito:

*   Reserva de IP (para o IP do Arduino nunca mudar)
*   Teste de ping via CMD

![Imagem11](https://github.com/user-attachments/assets/31e39143-468b-4e5e-97aa-6334941504f3)

O Arduino respondeu com 0% de perda.

***

***

# **Dia 2 – 13/03/2026**

***

# 8. Repetição da Montagem e Configuração

Tudo foi remontado igual ao final do Dia 1:

*   Ethernet Shield conectado
*   Cabos de rede no roteador
*   IP reservado novamente
*   Teste de rede
*   Instalação do app “Ping” no celular

***

# 9. Desenvolvimento do HTML no VS Code

Configurações feitas:

*   Salvamento automático
*   Extensão Live Server instalada
*   Criação de `index.html`

![Imagem12](https://github.com/user-attachments/assets/3678951d-b092-490e-827b-0dc78743de80)

Código inicial:

```
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arduino WEB SERVER</title>
</head>
<body>
    <h1>Hello Arduino :)</h1>

    <style>
        body {
            font-family: sans-serif;
            text-align: center;
        }
    </style>
</body>
</html>
```

![Imagem13](https://github.com/user-attachments/assets/c8b19905-c31e-4347-a63f-36f83575cff8)

***

# 10. Programando o Arduino Web Server (Parte 1)

Código inicial no Arduino:

![Imagem14](https://github.com/user-attachments/assets/f3017479-8b50-4f24-b1f4-1e485baaa4c7)

Explicações:

*   `Ethernet.begin(mac);` → pega IP via DHCP
*   `server.begin();` → inicia servidor web na porta 80
*   `Ethernet.localIP()` → mostra o IP

***

# 11. Serial Monitor Mostrando IP

![Imagem15](https://github.com/user-attachments/assets/70c474eb-f26f-4943-9388-fd85049b2a8d)

O Arduino exibiu:

    Arduino WEB Server
    IP: 192.168.0.101

Servidor funcionando.

***

# 12. Inserindo o HTML dentro do Arduino (PROGMEM)

Criado:

```cpp
const char pagina[] PROGMEM = R"HTML(
HTML AQUI
)HTML";
```

![Imagem16](https://github.com/user-attachments/assets/fb2d61ad-a0b3-4ef2-85f9-83a27a15745e)

***

# 13. Colando o HTML dentro do Arduino

Vocês copiaram o HTML do VS Code e colaram dentro do R"HTML()HTML".

![Imagem17](https://github.com/user-attachments/assets/c79d89a8-db02-45f0-ba7c-423957b64015)

Isso permite ao Arduino enviar a página real para navegadores.

***

# 14. Programando o void loop() (Servidor HTTP Completo)

![Imagem18](https://github.com/user-attachments/assets/5cf0aa2d-e88f-4c77-97fa-1557c1968d95)

Código explicado:

*   `server.available()` → detecta navegador
*   `HTTP/1.1 200 OK` → resposta padrão
*   `Content-Type: text/html` → navegador entende que é HTML
*   `client.print(FPSTR(pagina));` → envia o HTML do PROGMEM
*   `client.stop();` → finaliza conexão

***

# 15. Resultado Final do Dia 2

![Imagem19](https://github.com/user-attachments/assets/dca2c3b4-0b5f-4732-b4e7-76a8dced8390)

O grupo digitou o IP do Arduino no:

*   computador
*   celular

E a página **Hello Arduino** abriu nos dois dispositivos.

Isso confirma:

* Servidor funcionando
* HTML funcionando
* Rede funcionando
* Arduino como Web Server
* Código 100% correto

***

# Conclusão Parcial (Dias 1 e 2)

Até agora o grupo:

*   configurou rede IoT
*   programou comunicação serial
*   montou HTML
*   inseriu HTML no Arduino
*   criou servidor web
*   enviou páginas HTML
*   acessou a página pelo navegador

O Arduino agora funciona como um **servidor web**, acessível por qualquer dispositivo na mesma rede.

***

