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

Vou montar novamente **um roteiro de apresentação para feira de ciências**, dividido para **duas pessoas**, com explicação **linha por linha**, usando **linguagem simples** para qualquer pessoa entender.

---

# Pessoa 1 — Introdução, Arduino e configuração do código

No nosso projeto criamos **vários efeitos de iluminação com LEDs**, e usamos **dois botões**:

* um botão para **mudar o modo de iluminação**
* outro botão para **controlar a velocidade dos LEDs**

---

# Definição dos botões

```ino
const int botaoVel = 2;
const int botaoModo = 10;
```

Aqui definimos os pinos onde os botões estão conectados.

* pino 2 → botão que controla a **velocidade**
* pino 10 → botão que muda o **modo de iluminação**

---

# Variáveis do sistema

```ino
int velocidade = 150;
int modo = 0;
```

Essas variáveis controlam o funcionamento do sistema.

* **velocidade** → controla a rapidez da sequência de LEDs
* **modo** → define qual efeito de iluminação está ativo

---

# Variáveis para detectar clique de botão

```ino
bool estadoAnteriorVel = HIGH;
bool estadoAnteriorModo = HIGH;
```

Essas variáveis guardam o **estado anterior dos botões**.

Isso permite que o Arduino detecte **quando um botão foi pressionado**, evitando leituras repetidas.

---

# Variável de tempo

```ino
unsigned long tempoPressionado = 0;
```

Essa variável guarda **o momento em que o botão foi pressionado**.

Ela ajuda a diferenciar **toque rápido** de **toque longo**.

---

# Função setup()

```ino
void setup()
```

Essa função roda **apenas uma vez quando o Arduino liga**.

---

# Configuração dos botões

```ino
pinMode(botaoVel, INPUT_PULLUP);
pinMode(botaoModo, INPUT_PULLUP);
```

Aqui configuramos os botões como **entradas**.

O modo **INPUT_PULLUP** usa um resistor interno do Arduino para garantir uma leitura mais estável.

---

# Configuração dos LEDs

```ino
for (int i = 3; i <= 9; i++) {
  pinMode(i, OUTPUT);
  digitalWrite(i, LOW);
}
```

Esse trecho configura **todos os LEDs conectados entre os pinos 3 e 9**.

O comando **for** repete a configuração para cada LED.

Depois disso, todos começam **apagados**.

---

# Configuração da função aleatória

```ino
randomSeed(analogRead(0));
```

Essa linha prepara o Arduino para gerar **números aleatórios**.

Isso será usado em um dos modos de iluminação.

---

# Pessoa 2 — Funcionamento do sistema

## Função principal

```ino
void loop()
```

Essa função roda **continuamente enquanto o Arduino estiver ligado**.

Ela verifica os botões e executa os modos de iluminação.

---

# Leitura do botão de velocidade

```ino
bool estadoVel = digitalRead(botaoVel);
```

Aqui o Arduino verifica se o botão de velocidade foi pressionado.

---

# Detectando quando o botão foi pressionado

```ino
if (estadoVel == LOW && estadoAnteriorVel == HIGH)
```

Essa condição detecta **o momento exato em que o botão é pressionado**.

Quando isso acontece, o sistema registra o tempo.

---

```ino
tempoPressionado = millis();
```

A função **millis()** retorna o tempo desde que o Arduino foi ligado.

---

# Ajuste da velocidade

Se o botão ficar pressionado por mais tempo:

```ino
velocidade -= 15;
```

A velocidade **aumenta**, porque o tempo de atraso diminui.

Mas existe um limite mínimo:

```ino
if (velocidade < 10) velocidade = 10;
```

---

# Clique rápido no botão

Se o botão for pressionado rapidamente:

```ino
velocidade += 50;
```

Isso faz os LEDs ficarem **mais lentos**.

Também existe um limite máximo:

```ino
if (velocidade > 600) velocidade = 600;
```

---

# Botão de modo

```ino
bool estadoModo = digitalRead(botaoModo);
```

Aqui o Arduino verifica o botão que muda o **modo de iluminação**.

---

```ino
modo++;
```

Cada vez que o botão é pressionado, o sistema muda para o próximo modo.

---

```ino
if (modo > 5) modo = 0;
```

Depois do último modo, o sistema volta para o primeiro.

---

# Modos de iluminação

## Modo 0 — Efeito de ida e volta

Os LEDs acendem **em sequência de um lado para o outro**, criando um efeito de movimento.

---

## Modo 1 — Todos piscando

Todos os LEDs **acendem ao mesmo tempo e depois apagam**.

---

## Modo 2 — Sequência simples

Os LEDs acendem **um por um em ordem**.

---

## Modo 3 — LED aleatório

Um LED **aleatório acende por vez**, criando um efeito imprevisível.

---

## Modo 4 — LEDs alternados

Primeiro acendem **os LEDs ímpares**, depois **os pares**.

Isso cria um efeito alternado.

---

## Modo 5 — Pisca rápido

Todos os LEDs piscam juntos, mas **mais rápido** que no modo 1.

---

# Conclusão da apresentação

Esse projeto mostra como o Arduino pode **controlar vários LEDs e criar diferentes efeitos de iluminação**.

Com apenas **dois botões**, conseguimos:

* alterar a **velocidade**
* mudar o **modo de iluminação**

Esse tipo de sistema pode ser usado em **painéis de LED, decoração, sinalização e projetos eletrônicos interativos**.

---
