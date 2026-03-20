# Mini Piano Digital

Neste projeto desenvolvemos um Mini Piano Digital com Arduino. Cada botão funciona como uma tecla musical. Quando pressionamos um botão, o Arduino envia uma frequência sonora para o buzzer, que reproduz uma nota musical.

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
* Buzzer
* Protoboard
* 4 Push Button

---

# Códigos feitos no Arduino para realizar o projeto

```ino
int buzzer = 8;

int botao1 = 2;
int botao2 = 3;
int botao3 = 4;
int botao4 = 5;

void setup() {

  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);
  pinMode(botao4, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);

}

void loop() {

  if(digitalRead(botao1) == LOW){
    tone(buzzer,262);
  }

  else if(digitalRead(botao2) == LOW){
    tone(buzzer,294);
  }

  else if(digitalRead(botao3) == LOW){
    tone(buzzer,330);
  }

  else if(digitalRead(botao4) == LOW){
    tone(buzzer,349);
  }

  else{
    noTone(buzzer);
  }

}
```

---

# O projeto (TnkerCad)

<img width="883" height="737" alt="image" src="https://github.com/user-attachments/assets/60c131f1-85dc-4894-8f11-ca204c8cdca2" />

---

# O projeto (Real)



# Explicação dos códigos:

# Pessoa 1 – Configuração do sistema

## Definição do buzzer

```ino
int buzzer = 8;
```

**Explicação:**

Aqui estamos dizendo que o **buzzer está conectado ao pino 8 do Arduino**.

O buzzer é o componente que **produz o som das notas musicais**.

---

## Definição dos botões

```ino
int botao1 = 2;
int botao2 = 3;
int botao3 = 4;
int botao4 = 5;
```

**Explicação:**

Essas linhas guardam os **pinos onde os botões estão conectados**.

| Botão   | Pino |
| ------- | ---- |
| Botão 1 | 2    |
| Botão 2 | 3    |
| Botão 3 | 4    |
| Botão 4 | 5    |

Cada botão funciona como **uma tecla do piano**.

---

## Função setup()

```ino
void setup() {
```

**Explicação:**

A função **setup()** roda **apenas uma vez**, quando o Arduino é ligado.

Ela serve para **configurar os componentes**.

---

## Configuração dos botões

```ino
pinMode(botao1, INPUT_PULLUP);
pinMode(botao2, INPUT_PULLUP);
pinMode(botao3, INPUT_PULLUP);
pinMode(botao4, INPUT_PULLUP);
```

**Explicação:**

Aqui estamos dizendo que os **botões são entradas**.

O `INPUT_PULLUP` ativa um **resistor interno do Arduino**, o que evita erros na leitura do botão.

---

## Configuração do buzzer

```ino
pinMode(buzzer, OUTPUT);
```

**Explicação:**

Aqui definimos que o **buzzer é uma saída**, porque o Arduino vai enviar sinal para ele produzir som.

---

# 👨‍💻 Pessoa 2 – Funcionamento do piano

## Função loop()

```ino
void loop() {
```

**Explicação:**

A função **loop() roda infinitamente**.

Ela verifica o tempo todo **se algum botão foi pressionado**.

---

## Primeiro botão

```ino
if(digitalRead(botao1) == LOW){
tone(buzzer,262);
}
```

**Explicação:**

Se o **botão 1 for pressionado**, o Arduino toca a nota **Dó**.

A função:

```
tone()
```

faz o buzzer emitir um **som em determinada frequência**.

262 Hz corresponde à nota **Dó**.

---

## Segundo botão

```ino
else if(digitalRead(botao2) == LOW){
tone(buzzer,294);
}
```

**Explicação:**

Se o **botão 2 for pressionado**, o buzzer toca a nota **Ré**.

---

## Terceiro botão

```ino
else if(digitalRead(botao3) == LOW){
tone(buzzer,330);
}
```

**Explicação:**

O **botão 3 toca a nota Mi**.

---

## Quarto botão

```ino
else if(digitalRead(botao4) == LOW){
tone(buzzer,349);
}
```

**Explicação:**

O **botão 4 toca a nota Fá**.

---

## Parar o som

```ino
else{
noTone(buzzer);
}
```

**Explicação:**

Se **nenhum botão estiver pressionado**, o buzzer **para de tocar**.

---
