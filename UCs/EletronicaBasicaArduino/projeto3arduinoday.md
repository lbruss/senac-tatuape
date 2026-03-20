# Dado Eletrônico com Arduino

Neste projeto criamos um dado eletrônico usando Arduino. Quando o botão é pressionado, o Arduino gera um número aleatório entre 1 e 6 e acende LEDs para representar o resultado, simulando o funcionamento de um dado usado em jogos.

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
* 6 LEDs
* Buzzer
* Protoboard
* 6 Resistores
* Push Button

---

# Códigos feitos no Arduino para realizar o projeto

```ino
int leds[6] = {2,3,4,5,6,7};
int botao = 8;

int numero;

void setup() {

  for(int i=0;i<6;i++){
    pinMode(leds[i], OUTPUT);
  }

  pinMode(botao, INPUT_PULLUP);

  randomSeed(analogRead(0));

}

void loop() {

  if(digitalRead(botao) == LOW){

    numero = random(1,7);

    for(int i=0;i<6;i++){
      digitalWrite(leds[i], LOW);
    }

    for(int i=0;i<numero;i++){
      digitalWrite(leds[i], HIGH);
    }

    delay(500);

  }

}
```

# O projeto (TnkerCad)

<img width="746" height="724" alt="image" src="https://github.com/user-attachments/assets/7fe17dd2-0cc2-4f99-ae46-96ca37b479c7" />

---

# O projeto (Real)



---

# Explicação dos códigos:

# Pessoa 1 – Configuração do sistema

## Lista de LEDs

```ino
int leds[6] = {2,3,4,5,6,7};
```

**Explicação:**

Aqui o Arduino guarda os **pinos onde os LEDs estão conectados**.

Nesse caso:

| LED   | Pino |
| ----- | ---- |
| LED 1 | 2    |
| LED 2 | 3    |
| LED 3 | 4    |
| LED 4 | 5    |
| LED 5 | 6    |
| LED 6 | 7    |

Assim o programa consegue **controlar todos os LEDs facilmente**.

---

## Botão

```ino
int botao = 8;
```

**Explicação:**

Essa linha define que o **botão está conectado ao pino 8**.

Quando o botão é pressionado, ele envia um sinal para o Arduino iniciar o jogo.

---

## Variável do resultado

```ino
int numero;
```

**Explicação:**

Essa variável guarda o **número sorteado pelo dado eletrônico**.

Exemplo:

```
numero = 4
```

---

## Função setup()

```ino
void setup() {

  for(int i=0;i<6;i++){
    pinMode(leds[i], OUTPUT);
  }

  pinMode(botao, INPUT_PULLUP);

  randomSeed(analogRead(0));

}
```

**Explicação:**

O `setup()` roda **uma vez quando o Arduino liga**.

Ele faz três coisas:

1️⃣ Define os LEDs como **saída**
2️⃣ Define o botão como **entrada**
3️⃣ Inicializa o sistema de **números aleatórios**

A linha:

```ino
randomSeed(analogRead(0));
```

faz o Arduino gerar **resultados aleatórios diferentes a cada vez**.

---

# Pessoa 2 – Funcionamento do dado

## Verificar se o botão foi pressionado

```ino
if(digitalRead(botao) == LOW)
```

**Explicação:**

Essa linha verifica **se o botão foi apertado**.

Quando o botão é pressionado, o Arduino inicia o sorteio do dado.

---

## Gerar número aleatório

```ino
numero = random(1,7);
```

**Explicação:**

O Arduino gera um número **entre 1 e 6**.

Isso simula o resultado de um dado real.

---

## Apagar todos os LEDs

```ino
for(int i=0;i<6;i++){
  digitalWrite(leds[i], LOW);
}
```

**Explicação:**

Antes de mostrar o novo resultado, o Arduino **desliga todos os LEDs**.

Isso evita que LEDs antigos fiquem acesos.

---

## Mostrar o resultado

```ino
for(int i=0;i<numero;i++){
  digitalWrite(leds[i], HIGH);
}
```

**Explicação:**

O Arduino acende LEDs **de acordo com o número sorteado**.

Exemplo:

| Número sorteado | LEDs acesos |
| --------------- | ----------- |
| 1               | 1 LED       |
| 3               | 3 LEDs      |
| 5               | 5 LEDs      |

---

## Pequena pausa

```ino
delay(500);
```

**Explicação:**

O Arduino espera **meio segundo** antes de permitir outro sorteio.

Isso evita que o dado fique rolando rápido demais.

---
