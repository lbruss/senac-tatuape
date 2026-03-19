# Theremin Ultrassônico com Arduino

Neste projeto criamos um instrumento eletrônico inspirado no Theremin. O sensor ultrassônico mede a distância de um objeto e o Arduino transforma essa distância em diferentes frequências sonoras no buzzer, permitindo controlar o som apenas movimentando a mão ou um objeto no ar.

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
* Fios Jumper
* Buzzer
* Prontoboard

# Códigos feitos no Arduino para realizar o projeto

```ino
int trig = 9;
int echo = 10;
int buzzer = 8;

long duracao;
int distancia;

void setup() {

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  // Envia pulso ultrassônico
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Recebe o tempo do eco
  duracao = pulseIn(echo, HIGH);

  // Calcula a distância
  distancia = duracao * 0.034 / 2;

  // Mostra no monitor serial
  Serial.print("Distancia: ");
  Serial.println(distancia);

  // Limite mínimo
  if (distancia < 20) {
    distancia = 20;
  }

  // Limite máximo
  if (distancia > 200) {
    distancia = 200;
  }

  // Converte distância em som
  int tom = map(distancia, 20, 200, 2000, 200);

  // Toca o som
  tone(buzzer, tom);

  delay(30);

}
```

---

# O projeto (TinkerCad)

<img width="825" height="752" alt="image" src="https://github.com/user-attachments/assets/f355f1f5-8d40-4685-bfad-43590595773d" />

---

# O projeto (Real)



---

# Explicação dos códigos:

---

# Pessoa 1 – Sensores e início do programa

## Definição dos pinos

```ino
int trig = 9;
int echo = 10;
int buzzer = 8;
```

**Explicação:**

Aqui o Arduino define **onde cada componente está conectado**.

* `trig` → pino que **envia o sinal ultrassônico**
* `echo` → pino que **recebe o sinal de volta**
* `buzzer` → pino que **produz o som**

---

## Variáveis de medição

```ino
long duracao;
int distancia;
```

**Explicação:**

Essas variáveis guardam informações da medição.

* `duracao` → tempo que o som demorou para ir e voltar
* `distancia` → distância calculada entre o sensor e o objeto

---

## Função setup()

```ino
void setup() {

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}
```

**Explicação:**

O `setup()` roda **uma vez quando o Arduino liga**.

Ele define:

* `trig` → saída
* `echo` → entrada
* `buzzer` → saída

Também ativa o **Monitor Serial**, que mostra a distância medida.

---

# Pessoa 2 – Funcionamento do instrumento

## Envio do pulso ultrassônico

```ino
digitalWrite(trig, LOW);
delayMicroseconds(2);

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
```

**Explicação:**

O sensor envia uma **onda de ultrassom**.

Essa onda viaja pelo ar até bater em um objeto e voltar.

---

## Recebendo o eco

```ino
duracao = pulseIn(echo, HIGH);
```

**Explicação:**

Aqui o Arduino mede **quanto tempo a onda demorou para voltar**.

Esse tempo é usado para descobrir a distância.

---

## Cálculo da distância

```ino
distancia = duracao * 0.034 / 2;
```

**Explicação:**

Essa fórmula transforma o tempo em **centímetros**.

* `0.034` → velocidade do som no ar
* `/2` → porque o som vai **até o objeto e volta**

---

## Mostrar a distância

```ino
Serial.print("Distancia: ");
Serial.println(distancia);
```

**Explicação:**

Mostra no computador **quantos centímetros o objeto está do sensor**.

---

## Limite de distância

```ino
if (distancia < 5) {
  distancia = 5;
}

if (distancia > 50) {
  distancia = 50;
}
```

**Explicação:**

Essas linhas evitam erros do sensor.

Elas garantem que a distância fique entre **5 cm e 50 cm**, que é a faixa ideal do sensor.

---

## Transformando distância em som

```ino
int tom = map(distancia, 5, 50, 2000, 200);
```

**Explicação:**

Aqui acontece a parte mais importante.

O Arduino **transforma distância em frequência sonora**.

| Distância | Som       |
| --------- | --------- |
| perto     | som agudo |
| longe     | som grave |

---

## Produção do som

```ino
tone(buzzer, tom);
```

**Explicação:**

O buzzer toca o som com a frequência calculada.

Assim, quando você move a mão ou um objeto, **o som muda**.

---
