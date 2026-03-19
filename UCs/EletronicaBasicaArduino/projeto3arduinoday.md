# Luz e Memória

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
* Fios jumper
* 4 LEDs
* Buzzer
* Protoboard
* 4 Resistores
* 4 Push Buttons

---

# Códigos feitos no Arduino para realizar o projeto

```ino
#define BUZZER 7

// Botões
#define INPUT_A 13
#define INPUT_B 12
#define INPUT_C 11
#define INPUT_D 10

// LEDs
#define OUTPUT_A 2
#define OUTPUT_B 3
#define OUTPUT_C 4
#define OUTPUT_D 5

const int MAX_LEVEL = 100;

int sequence[MAX_LEVEL];
int userSequence[MAX_LEVEL];

int currentLevel = 1;
int speed = 500;

// Melodia de erro
int melody[] = {262,196,196,220,196,0,247,262};
int durationNotes[] = {4,8,8,4,4,4,4,4};

void setup() {

  pinMode(INPUT_A, INPUT_PULLUP);
  pinMode(INPUT_B, INPUT_PULLUP);
  pinMode(INPUT_C, INPUT_PULLUP);
  pinMode(INPUT_D, INPUT_PULLUP);

  pinMode(OUTPUT_A, OUTPUT);
  pinMode(OUTPUT_B, OUTPUT);
  pinMode(OUTPUT_C, OUTPUT);
  pinMode(OUTPUT_D, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  randomSeed(millis());
}

void loop() {

  if (currentLevel == 1) {
    generateSequence();
  }

  showSequence();
  readSequence();
}

void showSequence() {

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  for (int i = 0; i < currentLevel; i++) {

    int pin = sequence[i];

    digitalWrite(pin, HIGH);

    if (pin == OUTPUT_A) tone(BUZZER, 200);
    if (pin == OUTPUT_B) tone(BUZZER, 300);
    if (pin == OUTPUT_C) tone(BUZZER, 400);
    if (pin == OUTPUT_D) tone(BUZZER, 500);

    delay(speed);

    noTone(BUZZER);
    digitalWrite(pin, LOW);

    delay(200);
  }
}

void readSequence() {

  int flag = 0;

  for (int i = 0; i < currentLevel; i++) {

    flag = 0;

    while (flag == 0) {

      if (digitalRead(INPUT_A) == LOW) {

        digitalWrite(OUTPUT_A, HIGH);
        tone(BUZZER, 200);
        delay(300);

        userSequence[i] = OUTPUT_A;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_A, LOW);
      }

      if (digitalRead(INPUT_B) == LOW) {

        digitalWrite(OUTPUT_B, HIGH);
        tone(BUZZER, 300);
        delay(300);

        userSequence[i] = OUTPUT_B;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_B, LOW);
      }

      if (digitalRead(INPUT_C) == LOW) {

        digitalWrite(OUTPUT_C, HIGH);
        tone(BUZZER, 400);
        delay(300);

        userSequence[i] = OUTPUT_C;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_C, LOW);
      }

      if (digitalRead(INPUT_D) == LOW) {

        digitalWrite(OUTPUT_D, HIGH);
        tone(BUZZER, 500);
        delay(300);

        userSequence[i] = OUTPUT_D;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_D, LOW);
      }
    }

    if (userSequence[i] != sequence[i]) {
      errorSequence();
      return;
    }
  }

  correctSequence();
}

void generateSequence() {

  for (int i = 0; i < MAX_LEVEL; i++) {

    int randomLED = random(2, 6);
    sequence[i] = randomLED;
  }
}

void melodyError() {

  for (int i = 0; i < 8; i++) {

    int noteDuration = 1000 / durationNotes[i];

    tone(BUZZER, melody[i], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;

    delay(pauseBetweenNotes);

    noTone(BUZZER);
  }
}

void errorSequence() {

  digitalWrite(OUTPUT_A, HIGH);
  digitalWrite(OUTPUT_B, HIGH);
  digitalWrite(OUTPUT_C, HIGH);
  digitalWrite(OUTPUT_D, HIGH);

  delay(250);

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  delay(250);

  melodyError();

  currentLevel = 1;
  speed = 500;
}

void correctSequence() {

  if (currentLevel < MAX_LEVEL) {
    currentLevel++;
  }

  speed -= 50;

  delay(200);
}

```

# O projeto (TnkerCad)

<img width="817" height="758" alt="image" src="https://github.com/user-attachments/assets/8420868a-5d66-4221-baf3-c39f3fd4b201" />

---

# O projeto (Real)



---

# Explicação dos códigos:

# Pessoa 1 – Estrutura do código e geração da sequência

## Definição dos pinos

No começo do código definimos onde cada componente está conectado.

```ino
#define BUZZER 7
```

Define que o **buzzer está no pino 7**.

Depois definimos os botões:

```ino
#define INPUT_A 13
#define INPUT_B 12
#define INPUT_C 11
#define INPUT_D 10
```

Esses pinos são usados para **ler quando o jogador aperta um botão**.

Agora os LEDs:

```ino
#define OUTPUT_A 2
#define OUTPUT_B 3
#define OUTPUT_C 4
#define OUTPUT_D 5
```

Esses pinos são usados para **acender os LEDs que mostram a sequência do jogo**.

---

## Variáveis do jogo

```ino
const int MAX_LEVEL = 100;
```

Define o **nível máximo do jogo**.

Depois criamos dois vetores:

```ino
int sequence[MAX_LEVEL];
int userSequence[MAX_LEVEL];
```

* `sequence` → guarda a sequência que o Arduino cria
* `userSequence` → guarda o que o jogador digitou

---

## Controle do nível e velocidade

```ino
int currentLevel = 1;
int speed = 500;
```

* `currentLevel` → nível atual do jogo
* `speed` → tempo que o LED fica aceso

Quanto maior o nível, **mais rápida fica a sequência**.

---

## Função setup()

Essa função roda **uma vez quando o Arduino liga**.

```ino
void setup()
```

Aqui configuramos os pinos.

Botões:

```ino
pinMode(INPUT_A, INPUT_PULLUP);
```

Isso significa:

* o botão fica **HIGH quando solto**
* fica **LOW quando pressionado**

LEDs:

```ino
pinMode(OUTPUT_A, OUTPUT);
```

Define que os pinos dos LEDs vão **enviar energia**.

Buzzer:

```ino
pinMode(BUZZER, OUTPUT);
```

Define o buzzer como saída de som.

---

## Gerar sequência aleatória

```ino
randomSeed(millis());
```

Isso faz o **Arduino IDE** gerar números diferentes a cada vez que o Arduino liga.

Depois a sequência é criada:

```ino
sequence[i] = random(2, 6);
```

Isso gera números entre:

```
2, 3, 4 ou 5
```

Cada número representa **um LED diferente**.

---

# Pessoa 2 – Funcionamento do jogo

## Função loop()

Essa função roda **o tempo todo**.

```ino
void loop()
```

Primeiro verificamos:

```ino
if (currentLevel == 1)
```

Se o jogo está no primeiro nível, o Arduino cria uma nova sequência.

Depois ele executa duas funções:

```ino
showSequence();
readSequence();
```

* mostrar sequência
* esperar jogador repetir

---

## Mostrar sequência

Função:

```ino
showSequence()
```

Ela percorre a sequência:

```ino
for (int i = 0; i < currentLevel; i++)
```

Isso significa que **cada nível mostra mais LEDs**.

O LED acende:

```ino
digitalWrite(pin, HIGH);
```

O buzzer toca um som diferente:

```ino
tone(BUZZER, 200);
```

Depois o LED apaga:

```ino
digitalWrite(pin, LOW);
```

---

## Ler sequência do jogador

Função:

```ino
readSequence()
```

Aqui o Arduino espera o jogador apertar os botões.

Exemplo:

```ino
if (digitalRead(INPUT_A) == LOW)
```

Se o botão A for pressionado:

* o LED acende
* o buzzer toca
* o Arduino registra a escolha do jogador.

---

## Verificar se o jogador acertou

Depois de cada botão apertado, o Arduino compara:

```ino
if (userSequence[i] != sequence[i])
```

Se for diferente:

```
erro
```

Então executa:

```ino
errorSequence();
```

---

## Quando o jogador erra

Função:

```ino
errorSequence()
```

O que acontece:

1. todos os LEDs acendem
2. toca uma melodia de erro
3. o jogo reinicia

---

## Quando o jogador acerta

Função:

```ino
correctSequence()
```

O Arduino faz:

```
currentLevel++
```

Ou seja:

➡ passa para o próximo nível.

Também aumenta a dificuldade:

```
speed -= 50
```

Então os LEDs ficam **mais rápidos**.













