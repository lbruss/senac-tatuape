# Teclado Musical com Arduino

Neste projeto desenvolvemos um Teclado Musical com Arduino. Cada botão representa uma nota da escala musical. Quando pressionamos um botão, o Arduino envia uma frequência específica para o buzzer, que reproduz a nota correspondente.

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
* 7 Push Button

# Códigos feitos no Arduino para realizar o projeto

```ino
int buzzer = 8;

int botao1 = 2;
int botao2 = 3;
int botao3 = 4;
int botao4 = 5;
int botao5 = 6;
int botao6 = 7;
int botao7 = 9;

void setup(){

pinMode(botao1,INPUT_PULLUP);
pinMode(botao2,INPUT_PULLUP);
pinMode(botao3,INPUT_PULLUP);
pinMode(botao4,INPUT_PULLUP);
pinMode(botao5,INPUT_PULLUP);
pinMode(botao6,INPUT_PULLUP);
pinMode(botao7,INPUT_PULLUP);

pinMode(buzzer,OUTPUT);

}

void loop(){

if(digitalRead(botao1)==LOW) tone(buzzer,262);
else if(digitalRead(botao2)==LOW) tone(buzzer,294);
else if(digitalRead(botao3)==LOW) tone(buzzer,330);
else if(digitalRead(botao4)==LOW) tone(buzzer,349);
else if(digitalRead(botao5)==LOW) tone(buzzer,392);
else if(digitalRead(botao6)==LOW) tone(buzzer,440);
else if(digitalRead(botao7)==LOW) tone(buzzer,494);
else noTone(buzzer);

}
```

---

# O projeto (TnkerCad)

<img width="831" height="758" alt="image" src="https://github.com/user-attachments/assets/0627feee-3424-402e-b4f0-197cc500a2b3" />

---

# O projeto (Real)



---

# Explicação dos códigos:

# Pessoa 1 – Configuração do projeto

## Definição do buzzer

```ino
int buzzer = 8;
```

**Explicação:**
Aqui definimos que o **buzzer está conectado ao pino 8 do Arduino**.
Ele é o componente responsável por **produzir o som das notas musicais**.

---

## Definição dos botões

```ino
int botao1 = 2;
int botao2 = 3;
int botao3 = 4;
int botao4 = 5;
int botao5 = 6;
int botao6 = 7;
int botao7 = 9;
```

**Explicação:**
Essas linhas definem **em quais pinos os botões estão conectados**.

| Botão | Pino |
| ----- | ---- |
| 1     | 2    |
| 2     | 3    |
| 3     | 4    |
| 4     | 5    |
| 5     | 6    |
| 6     | 7    |
| 7     | 9    |

Cada botão funciona como **uma tecla do teclado musical**.

---

## Função setup()

```ino
void setup(){
```

**Explicação:**
A função **setup() roda apenas uma vez**, quando o Arduino é ligado.
Ela serve para **configurar todos os componentes**.

---

## Configuração dos botões

```ino
pinMode(botao1,INPUT_PULLUP);
pinMode(botao2,INPUT_PULLUP);
pinMode(botao3,INPUT_PULLUP);
pinMode(botao4,INPUT_PULLUP);
pinMode(botao5,INPUT_PULLUP);
pinMode(botao6,INPUT_PULLUP);
pinMode(botao7,INPUT_PULLUP);
```

**Explicação:**
Aqui dizemos que **todos os botões são entradas**.

O modo `INPUT_PULLUP` ativa um **resistor interno do Arduino**, evitando erros na leitura do botão.

---

## Configuração do buzzer

```ino
pinMode(buzzer,OUTPUT);
```

**Explicação:**
Aqui definimos que o **buzzer é uma saída**, pois o Arduino envia sinal para ele gerar som.

---

# Pessoa 2 – Funcionamento do teclado

## Função loop()

```ino
void loop(){
```

**Explicação:**
A função **loop() roda continuamente**.

Ela verifica o tempo todo **se algum botão foi pressionado**.

---

## Primeiro botão

```ino
if(digitalRead(botao1)==LOW) tone(buzzer,262);
```

**Explicação:**
Se o **botão 1 for pressionado**, o Arduino toca a nota **Dó**.

A função:

`tone()`

faz o buzzer emitir som em uma **frequência específica**.

262 Hz corresponde à nota **Dó**.

---

## Outros botões

```ino
else if(digitalRead(botao2)==LOW) tone(buzzer,294);
else if(digitalRead(botao3)==LOW) tone(buzzer,330);
else if(digitalRead(botao4)==LOW) tone(buzzer,349);
else if(digitalRead(botao5)==LOW) tone(buzzer,392);
else if(digitalRead(botao6)==LOW) tone(buzzer,440);
else if(digitalRead(botao7)==LOW) tone(buzzer,494);
```

**Explicação:**
Cada botão toca uma **nota diferente da escala musical**.

| Botão | Nota | Frequência |
| ----- | ---- | ---------- |
| 1     | Dó   | 262        |
| 2     | Ré   | 294        |
| 3     | Mi   | 330        |
| 4     | Fá   | 349        |
| 5     | Sol  | 392        |
| 6     | Lá   | 440        |
| 7     | Si   | 494        |

Assim o Arduino cria um **pequeno teclado musical**.

---

## Parar o som

```ino
else noTone(buzzer);
```

**Explicação:**
Se **nenhum botão estiver pressionado**, o Arduino manda o buzzer **parar de tocar**.

---
