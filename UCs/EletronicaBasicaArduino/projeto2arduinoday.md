# Reflexo Arduino

**Este projeto é um jogo de reflexo com Arduino. O sistema acende um LED após um tempo aleatório e mede quanto tempo o jogador demora para apertar o botão. Dependendo da velocidade do jogador, o sistema indica vitória ou derrota com LEDs e sons. O jogo também possui níveis de dificuldade, que exigem reflexos cada vez mais rápidos.**

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
* 11 Fios Jumper
* 3 LEDs
* Buzzer
* Prontoboard
* 3 Resistores (330Ω)
* Push Buttons

# Códigos feitos no Arduino para realizar o projeto

```ino
int ledInicio = 8;
int ledVerde = 6;
int ledVermelho = 7;

int botaoJogo = 2;

int buzzer = 9;

unsigned long tempoInicio;
unsigned long tempoReacao;

int nivel = 1;

void setup() {

  pinMode(ledInicio, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  pinMode(botaoJogo, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  digitalWrite(ledInicio, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, LOW);

  int tempoAleatorio = random(1000, 4000);
  delay(tempoAleatorio);

  digitalWrite(ledInicio, HIGH);

  tempoInicio = millis();

  while (digitalRead(botaoJogo) == HIGH) {
  }

  tempoReacao = millis() - tempoInicio;

  Serial.print("Tempo de reação: ");
  Serial.println(tempoReacao);

  int tempoMaximo;

  switch(nivel) {

    case 1: tempoMaximo = 600; break;
    case 2: tempoMaximo = 550; break;
    case 3: tempoMaximo = 500; break;
    case 4: tempoMaximo = 450; break;
    case 5: tempoMaximo = 400; break;
    case 6: tempoMaximo = 350; break;
    case 7: tempoMaximo = 300; break;
    case 8: tempoMaximo = 270; break;
    case 9: tempoMaximo = 140; break;
    default: tempoMaximo = 100; break;

  }

  if (tempoReacao < tempoMaximo) {

    digitalWrite(ledVerde, HIGH);

    tone(buzzer, 1200);
    delay(200);
    tone(buzzer, 1500);
    delay(200);
    noTone(buzzer);

    Serial.println("Reflexo rápido!");

    if (nivel < 10) {
      nivel++;
    }

  } else {

    digitalWrite(ledVermelho, HIGH);

    tone(buzzer, 400);
    delay(500);
    noTone(buzzer);

    Serial.println("Reflexo lento!");

    nivel = 1;

  }

  Serial.print("Nível atual: ");
  Serial.println(nivel);

  delay(3000);

}
```

---

# Explicação dos códigos:

---

# Pessoa 1 – Componentes e início do código

### Definição dos pinos

```ino
int ledInicio = 8;
int ledVerde = 6;
int ledVermelho = 7;

int botaoJogo = 2;

int buzzer = 9;
```

**Explicação:**

Aqui o Arduino define **em quais pinos cada componente está conectado**.

* LED de início → pino **8**
* LED verde → pino **6**
* LED vermelho → pino **7**
* Botão → pino **2**
* Buzzer → pino **9**

Isso permite que o Arduino **controle esses componentes**.

---

### Variáveis do jogo

```ino
unsigned long tempoInicio;
unsigned long tempoReacao;

int nivel = 1;
```

**Explicação:**

Essas variáveis guardam informações do jogo.

* `tempoInicio` → momento em que o LED acende
* `tempoReacao` → tempo que o jogador demorou para apertar o botão
* `nivel` → nível atual de dificuldade

---

### Função setup()

```ino
void setup() {

  pinMode(ledInicio, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  pinMode(botaoJogo, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}
```

**Explicação:**

O `setup()` roda **uma única vez quando o Arduino liga**.

Aqui ele:

* define **LEDs e buzzer como saída**
* define o **botão como entrada**
* ativa o **Monitor Serial** para mostrar informações

---

# Pessoa 2 – Funcionamento do jogo

### Espera aleatória

```ino
int tempoAleatorio = random(1000, 4000);
delay(tempoAleatorio);
```

**Explicação:**

O Arduino espera **entre 2 e 5 segundos**.

Isso evita que o jogador **preveja quando o LED vai acender**.

---

### Início do jogo

```ino
digitalWrite(ledInicio, HIGH);

tempoInicio = millis();
```

**Explicação:**

* O **LED acende**, indicando que o jogador deve apertar o botão.
* `millis()` começa a contar o tempo em **milissegundos**.

---

### Espera o botão ser pressionado

```ino
while (digitalRead(botaoJogo) == HIGH) {
}
```

**Explicação:**

O Arduino **fica esperando até o jogador apertar o botão**.

---

### Cálculo do tempo de reação

```ino
tempoReacao = millis() - tempoInicio;
```

**Explicação:**

Aqui o Arduino calcula:

**tempo atual – tempo que o LED acendeu**

Assim ele descobre **quanto tempo o jogador demorou**.

---

### Sistema de níveis

```ino
switch(nivel) {

case 1: tempoMaximo = 600; break;
case 2: tempoMaximo = 550; break;
case 3: tempoMaximo = 500; break;
```

**Explicação:**

Cada nível tem um **tempo máximo para reagir**.

Quanto maior o nível:

➡ menor o tempo permitido
➡ mais difícil fica o jogo

---

### Verificação do resultado

```ino
if (tempoReacao < tempoMaximo)
```

**Explicação:**

O Arduino verifica se o jogador foi **rápido o suficiente**.

Se foi rápido:

* LED verde acende
* nível aumenta

Se foi lento:

* LED vermelho acende
* jogo reinicia

---

### Sons do buzzer

Vitória:

```ino
tone(buzzer, 1200);
```

Derrota:

```ino
tone(buzzer, 400);
```

**Explicação:**

* Som **agudo** → vitória
* Som **grave** → derrota

Isso ajuda a identificar o resultado **sem olhar para os LEDs**.

---

> "Este projeto é um jogo de reflexo com Arduino. O sistema acende um LED após um tempo aleatório e mede quanto tempo o jogador demora para apertar o botão. Dependendo da velocidade do jogador, o sistema indica vitória ou derrota com LEDs e sons. O jogo também possui níveis de dificuldade, que exigem reflexos cada vez mais rápidos."

---
