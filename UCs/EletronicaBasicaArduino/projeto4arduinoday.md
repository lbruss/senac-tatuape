# Sequencial de LED

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



---

# Códigos feitos no Arduino para realizar o projeto

```ino
const int botaoVel = 2;
const int botaoModo = 10;

int velocidade = 150;
int modo = 0;

bool estadoAnteriorVel = HIGH;
bool estadoAnteriorModo = HIGH;

unsigned long tempoPressionado = 0;

void setup() {
  pinMode(botaoVel, INPUT_PULLUP);
  pinMode(botaoModo, INPUT_PULLUP);

  for (int i = 3; i <= 9; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  randomSeed(analogRead(0));
}

void loop() {
  // BOTÃO VELOCIDADE (pino 2)
  bool estadoVel = digitalRead(botaoVel);

  if (estadoVel == LOW && estadoAnteriorVel == HIGH) {
    tempoPressionado = millis();
  }

  if (estadoVel == LOW && (millis() - tempoPressionado > 400)) {
    velocidade -= 15;
    if (velocidade < 10) velocidade = 10;
    delay(50);
  }

  if (estadoVel == HIGH && estadoAnteriorVel == LOW) {
    if (millis() - tempoPressionado < 400) {
      velocidade += 50;
      if (velocidade > 600) velocidade = 600;
    }
  }

  estadoAnteriorVel = estadoVel;

  // BOTÃO MODO (pino 10)
  bool estadoModo = digitalRead(botaoModo);

  if (estadoModo == LOW && estadoAnteriorModo == HIGH) {
    modo++;
    if (modo > 5) modo = 0;
    delay(200);
  }

  estadoAnteriorModo = estadoModo;

  // ===== MODOS =====

  if (modo == 0) {
    for (int i = 3; i <= 9; i++) {
      digitalWrite(i, HIGH);
      delay(velocidade);
      digitalWrite(i, LOW);
    }
    for (int i = 9; i >= 3; i--) {
      digitalWrite(i, HIGH);
      delay(velocidade);
      digitalWrite(i, LOW);
    }
  }

  if (modo == 1) {
    for (int i = 3; i <= 9; i++) digitalWrite(i, HIGH);
    delay(velocidade);
    for (int i = 3; i <= 9; i++) digitalWrite(i, LOW);
    delay(velocidade);
  }

  if (modo == 2) {
    for (int i = 3; i <= 9; i++) {
      digitalWrite(i, HIGH);
      delay(velocidade);
      digitalWrite(i, LOW);
    }
  }

  if (modo == 3) {
    int led = random(3, 10);
    digitalWrite(led, HIGH);
    delay(velocidade);
    digitalWrite(led, LOW);
  }

  if (modo == 4) {
    for (int i = 3; i <= 9; i += 2) digitalWrite(i, HIGH);
    delay(velocidade);
    for (int i = 3; i <= 9; i += 2) digitalWrite(i, LOW);

    for (int i = 4; i <= 8; i += 2) digitalWrite(i, HIGH);
    delay(velocidade);
    for (int i = 4; i <= 8; i += 2) digitalWrite(i, LOW);
  }

  if (modo == 5) {
    for (int i = 3; i <= 9; i++) digitalWrite(i, HIGH);
    delay(velocidade / 2);
    for (int i = 3; i <= 9; i++) digitalWrite(i, LOW);
    delay(velocidade);
  }
}
```

---

# O projeto



---

# Explicação dos códigos e o que se pode falar na hora da explicação:

