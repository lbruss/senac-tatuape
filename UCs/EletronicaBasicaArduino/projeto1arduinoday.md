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

# Explicação dos códigos:


## Pessoa 1 — Configuração + Sensor

### 1. O que o código faz

> O Arduino mede a distância de um objeto e usa LEDs e buzzer para indicar se ele está perto, médio ou longe.

---

## 2. Configurações iniciais

```ino
const int distancia_carro = 10;
const int distancia_media = 20;
```

Define as faixas de distância:

* até 10 cm → perto
* até 20 cm → médio

---

## 3. Definição dos pinos

```ino
const int TRIG = 3;
const int ECHO = 2;
```

 Sensor ultrassônico:

* TRIG → envia o sinal
* ECHO → recebe o eco

---

```ino
const int ledGreen = 7;
const int ledYellow = 6;
const int ledRed = 8;
const int buzzer = 9;
```

Componentes:

* LEDs → indicam distância
* Buzzer → faz som de alerta

---

## 4. Função `setup()`

```ino
void setup() {
  Serial.begin(9600);
```

Inicia comunicação com o computador

---

```ino
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);
```

Define sensor:

* TRIG envia
* ECHO recebe

---

```ino
pinMode(ledGreen, OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledRed, OUTPUT);
pinMode(buzzer, OUTPUT);
```

Define LEDs e buzzer como saída

---

## 5. Função do sensor

```ino
int sensor_morcego(int pinotrig, int pinoecho)
```

Mede a distância do objeto

---

### Como funciona:

```ino
digitalWrite(pinotrig, LOW);
delayMicroseconds(2);
digitalWrite(pinotrig, HIGH);
delayMicroseconds(10);
digitalWrite(pinotrig, LOW);
```

Envia um pulso ultrassônico

---

```ino
return pulseIn(pinoecho, HIGH) / 58;
```

Explicação simples:

* Mede o tempo do eco
* Converte para centímetros

Analogia:

> Igual um morcego 🦇: ele “manda som” e calcula a distância pelo retorno

---

---

# Pessoa 2 — Lógica + LEDs + Buzzer

## 6. Função `loop()`

```ino
int distancia = sensor_morcego(TRIG, ECHO);
```

Mede a distância do objeto o tempo todo

---

## 7. Objeto perto

```ino
if (distancia <= distancia_carro)
```

Se estiver até 10 cm:

```ino
digitalWrite(ledRed, HIGH);
digitalWrite(ledYellow, LOW);
digitalWrite(ledGreen, LOW);
```

Liga LED vermelho (perigo)

---

```ino
tocaBuzzer();
```

Ativa sirene (som forte)

---

---

## 8. Distância média

```ino
else if (distancia <= distancia_media)
```

Entre 11 e 20 cm:

```ino
digitalWrite(ledYellow, HIGH);
```

Liga LED amarelo (atenção)

---

```ino
tone(buzzer, 1000);
```

Som mais leve

---

---

## 9. Objeto longe

```ino
else
```

Acima de 20 cm:

```ino
digitalWrite(ledGreen, HIGH);
```

Liga LED verde (seguro)

---

```ino
noTone(buzzer);
```

Sem som

---

---

## 10. Função do buzzer (sirene)

```ino
void tocaBuzzer()
```

Cria som de alerta

---

```ino
for (int x = 0; x < 180; x++)
```

Repete várias vezes (efeito contínuo)

---

```ino
seno = (sin(x * 3.1416 / 180));
```

Cria variação do som

---

```ino
frequencia = 2000 + (int)(seno * 1000);
```

Frequência muda → som tipo sirene 🚨

---

```ino
tone(buzzer, frequencia);
```

Emite o som

---
