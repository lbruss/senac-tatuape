# Sensor Inteligente de Proximidade

## Projeto Arduino Day

**Lista de materiais disponíveis:**

* Cabo USB
* Arduino Uno
* Fios jumper
* Sensor ultrassônico HC-SR04
* LEDs
* LDR
* Buzzer
* Protoboard
* Resistores (valores variados)
* Push Buttons

**Lista de materiais utilizados:**

* Cabo USB
* Arduino Uno
* 12 Fios Jumper
* Sensor ultrassônico HC-SR04
* 3 LEDs
* Buzzer
* Prontoboard
* 3 Resistores (330Ω)

# Códigos feitos no Arduino para realizar o projeto

```ino
// Distâncias (em cm)
const int distancia_objeto = 10;   // PERTO
const int distancia_media = 20;   // MÉDIO

// Sensor ultrassônico
const int TRIG = 3;
const int ECHO = 2;

// LEDs
const int ledGreen = 6;
const int ledYellow = 5;
const int ledRed = 4;

// Buzzer
const int buzzer = 7;

// Variáveis do buzzer (sirene)
float seno;
int frequencia;

void setup() {
  Serial.begin(9600);

  // Sensor
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  // LEDs
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);

  // Buzzer
  pinMode(buzzer, OUTPUT);
}

void loop() {

  int distancia = sensor_morcego(TRIG, ECHO);

  // LED Vermelho
  if (distancia <= distancia_objeto) {

    Serial.print("PERTO: ");
    Serial.print(distancia);
    Serial.println(" cm");

    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);

    tocaBuzzer();
  }

  // LED Amarelo
  else if (distancia <= distancia_media) {

    Serial.print("MEDIA: ");
    Serial.print(distancia);
    Serial.println(" cm");

    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, LOW);

    tone(buzzer, 1000); // som mais leve
  }

  // LED Verde
  else {

    Serial.print("LIVRE: ");
    Serial.print(distancia);
    Serial.println(" cm");

    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);

    noTone(buzzer);
  }

  delay(100);
}

// Sensor
int sensor_morcego(int pinotrig, int pinoecho) {

  digitalWrite(pinotrig, LOW);
  delayMicroseconds(2);

  digitalWrite(pinotrig, HIGH);
  delayMicroseconds(10);

  digitalWrite(pinotrig, LOW);

  return pulseIn(pinoecho, HIGH) / 58;
}

// Buzzer
void tocaBuzzer() {

  for (int x = 0; x < 180; x++) {

    seno = (sin(x * 3.1416 / 180));
    frequencia = 2000 + (int)(seno * 1000);

    tone(buzzer, frequencia);
    delay(2);
  }
}
```

---

# O projeto (TnkerCad)

<img width="1054" height="774" alt="Captura de tela 2026-03-18 212842" src="https://github.com/user-attachments/assets/3cdb3d43-62e2-440d-91a5-149d0355e039" />

---

# O projeto (Real)



---

# Explicação dos códigos e o que se pode falar na hora da explicação:

# Pessoa 1 — O que é Arduino + início do código

## Introdução

Olá, nós desenvolvemos um projeto utilizando **Arduino** e um **sensor ultrassônico** para detectar a distância de objetos.

O Arduino é uma **plataforma eletrônica de código aberto** usada para criar projetos tecnológicos. Ele possui uma pequena placa com um **microcontrolador**, que funciona como um **pequeno computador** capaz de ler sensores e controlar componentes eletrônicos, como LEDs, motores e buzzer.

Quando dizemos que ele é **código aberto**, significa que qualquer pessoa pode acessar os projetos, aprender com eles e modificar o código livremente.

No nosso projeto, o Arduino mede a distância de um objeto e usa **três LEDs e um buzzer** para indicar se o objeto está **longe, em distância média ou perto**.

---

# Configuração das distâncias

```ino
const int distancia_objeto = 10;
const int distancia_media = 20;
```

Aqui nós definimos duas distâncias importantes:

* **10 centímetros** → indica que o objeto está **perto**
* **20 centímetros** → indica uma distância **média**

Esses valores ajudam o programa a decidir qual LED deve acender.

---

# Configuração do sensor

```ino
const int TRIG = 3;
const int ECHO = 2;
```

Essas linhas definem os pinos usados pelo **sensor ultrassônico**.

O sensor possui dois pinos principais:

* **TRIG** → envia um pulso de som ultrassônico
* **ECHO** → recebe o eco desse som quando ele volta após bater em um objeto

Esse funcionamento é parecido com o de um **morcego**, que usa o som para localizar objetos.

---

# Configuração dos LEDs

```ino
const int ledGreen = 6;
const int ledYellow = 5;
const int ledRed = 4;
```

Aqui definimos os pinos onde os LEDs estão conectados:

* LED verde → indica que está **seguro**
* LED amarelo → indica **atenção**
* LED vermelho → indica **perigo**

---

# Configuração do buzzer

```ino
const int buzzer = 7;
```

O **buzzer** é um pequeno componente que emite som.
Ele será usado como **alerta sonoro** quando um objeto estiver muito perto.

---

# Variáveis usadas no som

```ino
float seno;
int frequencia;
```

Essas variáveis são usadas para criar um **efeito de sirene**, fazendo o som do buzzer variar de frequência.

---

# Função de inicialização

```ino
void setup() {
```

Essa função roda **uma única vez**, quando o Arduino é ligado.

---

```ino
Serial.begin(9600);
```

Essa linha inicia a comunicação com o computador, permitindo que o Arduino mostre informações como a **distância medida**.

---

```ino
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);
```

Aqui definimos como os pinos do sensor irão funcionar:

* **TRIG envia sinal** → saída
* **ECHO recebe sinal** → entrada

---

```ino
pinMode(ledGreen, OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledRed, OUTPUT);
```

Essas linhas dizem ao Arduino que os LEDs serão **dispositivos de saída**, ou seja, o Arduino vai controlar quando eles ligam ou desligam.

---

```ino
pinMode(buzzer, OUTPUT);
```

O buzzer também é configurado como **saída**, pois o Arduino irá enviar o sinal que gera o som.

---

# Pessoa 2 — Funcionamento do sistema

## Função principal

```cpp
void loop() {
```

Essa é a função principal do programa.

Ela roda **repetidamente enquanto o Arduino estiver ligado**, verificando constantemente a distância do objeto.

---

## Medindo a distância

```ino
int distancia = sensor_morcego(TRIG, ECHO);
```

Aqui o programa chama uma função que mede a distância do objeto usando o sensor ultrassônico.

O valor medido é armazenado na variável chamada **distancia**.

---

# Objeto muito perto

```ino
if (distancia <= distancia_objeto)
```

Essa condição verifica se o objeto está a **10 cm ou menos**.

Se isso acontecer, o sistema entende que o objeto está **muito perto**.

---

```ino
digitalWrite(ledRed, HIGH);
digitalWrite(ledYellow, LOW);
digitalWrite(ledGreen, LOW);
```

Aqui o Arduino:

* Liga o **LED vermelho**
* Apaga os outros LEDs

---

```ino
tocaBuzzer();
```

Depois disso, o buzzer toca um **som de alerta mais forte**.

---

# Distância média

```ino
else if (distancia <= distancia_media)
```

Aqui o programa verifica se a distância está **entre 10 e 20 centímetros**.

---

```ino
digitalWrite(ledYellow, HIGH);
```

Nesse caso:

* O **LED amarelo acende**
* Indica que o objeto está em uma distância intermediária

---

```ino
tone(buzzer, 1000);
```

O buzzer emite um **som leve**, indicando atenção.

---

# Objeto longe

```ino
else
```

Se nenhuma das condições anteriores acontecer, significa que o objeto está **mais longe que 20 cm**.

---

```ino
digitalWrite(ledGreen, HIGH);
```

Então o **LED verde acende**, indicando que está seguro.

---

```ino
noTone(buzzer);
```

E o buzzer permanece **desligado**.

---

```ino
delay(100);
```

Essa linha faz o programa esperar **100 milissegundos** antes de repetir o processo.

Isso evita leituras rápidas demais.

---

# Função do sensor

```ino
int sensor_morcego(int pinotrig, int pinoecho)
```

Essa função é responsável por **medir a distância usando o sensor ultrassônico**.

---

```ino
digitalWrite(pinotrig, LOW);
delayMicroseconds(2);
```

Aqui o sensor é preparado para enviar o sinal.

---

```ino
digitalWrite(pinotrig, HIGH);
delayMicroseconds(10);
```

O sensor envia um **pulso ultrassônico**.

---

```cpp
digitalWrite(pinotrig, LOW);
```

Depois o pulso é interrompido.

---

```ino
return pulseIn(pinoecho, HIGH) / 58;
```

O Arduino mede quanto tempo o sinal demorou para voltar.

Esse tempo é convertido em **centímetros**, que é a distância do objeto.

---

# Função do buzzer

```ino
void tocaBuzzer()
```

Essa função cria o **som de sirene**.

---

```ino
for (int x = 0; x < 180; x++)
```

Esse laço repete várias vezes para gerar o efeito sonoro.

---

```ino
seno = (sin(x * 3.1416 / 180));
```

Aqui usamos um cálculo matemático para fazer o som **variar de frequência**.

---

```ino
frequencia = 2000 + (int)(seno * 1000);
```

Isso faz o buzzer mudar o tom do som, criando o efeito de **sirene**.

---

```ino
tone(buzzer, frequencia);
```

Essa linha faz o buzzer emitir o som.

---

# Conclusão da apresentação

Resumindo, o nosso sistema funciona como um **sensor inteligente de proximidade**.

Ele usa um sensor ultrassônico para medir a distância de um objeto e indica o resultado através de **luzes e som**:

* LED verde → objeto longe
* LED amarelo → atenção
* LED vermelho + buzzer → objeto muito perto

Esse tipo de tecnologia é usada em diversas aplicações, como **sensores de estacionamento, robótica e sistemas de segurança**.

---
