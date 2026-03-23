# Projeto Semáforo

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
//Projeto Microcontroladores - Semáforo de veículos e pedestre com parada + PIEZO

//Declarando variáveis que não mudarão
const int ledGreenCar = 8;
const int ledYellowCar = 10;
const int ledRedCar = 12;

const int ledGreenPed = 6;
const int ledRedPed = 4;

const int botPed = 2;

const int piezo = 3; //  Piezo no pino 3

//Declarando variáveis que mudarão
unsigned long tempo;

void setup()
{
  tempo = millis();
  
  pinMode(ledGreenCar, OUTPUT);
  pinMode(ledYellowCar, OUTPUT);
  pinMode(ledRedCar, OUTPUT);
  
  pinMode(ledGreenPed, OUTPUT);
  pinMode(ledRedPed, OUTPUT);
  
  pinMode(botPed, INPUT_PULLUP);
  
  pinMode(piezo, OUTPUT); //  Configura o piezo

  digitalWrite(ledGreenCar, 1);
  digitalWrite(ledRedPed, 1);
}

void loop(){
  int leitura = digitalRead(botPed);
  
  if((millis() - tempo) > 5000){
    
    if(leitura == 0){
      
      digitalWrite(ledGreenCar, 0);
      digitalWrite(ledYellowCar, 1);
      delay(2000);

      digitalWrite(ledYellowCar, 0);
      digitalWrite(ledRedCar, 1);
      delay(1000);

      digitalWrite(ledRedPed, 0);
      digitalWrite(ledGreenPed, 1);
      delay(5000);
      
      // Pisca + som de fechamento
      for(int i = 0 ; i < 5 ; i++){		
        digitalWrite(ledGreenPed, 0);
        tone(piezo, 1000); // Liga som
        delay(500);

        digitalWrite(ledGreenPed, 1);
        noTone(piezo); // Desliga som
        delay(500);
      }      

      digitalWrite(ledGreenPed, 0);
      digitalWrite(ledRedPed, 1);
      
      delay(500);
      
      digitalWrite(ledRedCar, 0);
      digitalWrite(ledGreenCar, 1);
      
      tempo = millis();
    }
  }
  delay(10);
}
```

---

# O projeto

<img width="1030" height="779" alt="image" src="https://github.com/user-attachments/assets/8c0138e1-bf22-48e2-8121-7b1520f6c26f" />

---

# Explicação dos códigos e o que se pode falar na hora da explicação:

---

# Pessoa 1 — Introdução, Arduino e configuração do código

No nosso projeto, o Arduino controla:

* um **semáforo para carros**
* um **semáforo para pedestres**
* um **botão de travessia**
* e um **buzzer que emite som** quando o tempo de travessia está acabando.

---

# Declaração dos LEDs do semáforo dos carros

```ino
const int ledGreenCar = 8;
const int ledYellowCar = 10;
const int ledRedCar = 12;
```

Aqui definimos os pinos onde estão conectados os **LEDs do semáforo dos carros**.

* pino 8 → LED verde
* pino 10 → LED amarelo
* pino 12 → LED vermelho

A palavra **const** significa que esses valores **não irão mudar durante o programa**.

---

# Declaração dos LEDs do pedestre

```ino
const int ledGreenPed = 6;
const int ledRedPed = 4;
```

Esses LEDs representam o **semáforo do pedestre**.

* verde → pode atravessar
* vermelho → não pode atravessar

---

# Botão do pedestre

```ino
const int botPed = 2;
```

Esse botão simula o **botão que os pedestres apertam para pedir a travessia**.

---

# Buzzer (som)

```ino
const int piezo = 3;
```

Esse pino controla o **buzzer piezoelétrico**, que é um pequeno dispositivo que produz som.

Ele será usado para **avisar quando o tempo de travessia está terminando**.

---

# Variável de tempo

```ino
unsigned long tempo;
```

Essa variável guarda o **tempo em que o sistema foi iniciado ou reiniciado**.

Ela é usada para evitar que o semáforo mude muito rápido.

---

# Função setup()

```ino
void setup()
```

Essa função roda **apenas uma vez quando o Arduino liga**.

---

```ino
tempo = millis();
```

Aqui o Arduino guarda o **tempo atual em milissegundos**.

Isso será usado para controlar os intervalos do semáforo.

---

# Configuração dos LEDs

```ino
pinMode(ledGreenCar, OUTPUT);
pinMode(ledYellowCar, OUTPUT);
pinMode(ledRedCar, OUTPUT);
```

Essas linhas dizem ao Arduino que os LEDs do semáforo dos carros serão **saídas**, ou seja, o Arduino irá controlá-los.

---

```ino
pinMode(ledGreenPed, OUTPUT);
pinMode(ledRedPed, OUTPUT);
```

Aqui fazemos o mesmo para os LEDs do semáforo do pedestre.

---

```ino
pinMode(botPed, INPUT_PULLUP);
```

Essa linha configura o botão como **entrada**.

O modo **INPUT_PULLUP** usa um resistor interno do Arduino para garantir que a leitura do botão seja estável.

---

```ino
pinMode(piezo, OUTPUT);
```

Aqui configuramos o buzzer como **saída**, pois o Arduino irá enviar o sinal que gera o som.

---

# Estado inicial do semáforo

```ino
digitalWrite(ledGreenCar, 1);
digitalWrite(ledRedPed, 1);
```

Quando o sistema começa:

* carros → **verde (podem passar)**
* pedestres → **vermelho (não podem atravessar)**

---

# Pessoa 2 — Funcionamento do semáforo

## Função principal

```ino
void loop()
```

Essa é a função principal do programa.

Ela roda **continuamente enquanto o Arduino estiver ligado**.

---

# Leitura do botão

```ino
int leitura = digitalRead(botPed);
```

Aqui o Arduino verifica se o botão do pedestre foi pressionado.

---

# Verificação de tempo

```ino
if((millis() - tempo) > 5000)
```

Essa condição verifica se já passaram **5 segundos desde a última mudança do semáforo**.

Isso evita que o semáforo mude imediatamente após apertar o botão.

---

# Verificação do botão

```ino
if(leitura == 0)
```

Se o botão estiver pressionado, o sistema inicia a **sequência de travessia do pedestre**.

---

# Carros ficam amarelo

```ino
digitalWrite(ledGreenCar, 0);
digitalWrite(ledYellowCar, 1);
delay(2000);
```

Aqui:

* o verde dos carros apaga
* o amarelo acende por **2 segundos**

Isso avisa que o semáforo vai fechar.

---

# Carros param

```ino
digitalWrite(ledYellowCar, 0);
digitalWrite(ledRedCar, 1);
delay(1000);
```

Agora o semáforo dos carros fica **vermelho**, indicando que devem parar.

---

# Pedestre pode atravessar

```ino
digitalWrite(ledRedPed, 0);
digitalWrite(ledGreenPed, 1);
delay(5000);
```

O pedestre recebe **sinal verde por 5 segundos**, permitindo a travessia.

---

# Aviso de fim da travessia

```ino
for(int i = 0 ; i < 5 ; i++)
```

Esse comando cria um **loop que repete 5 vezes**.

Ele será usado para piscar o LED e emitir som.

---

```ino
digitalWrite(ledGreenPed, 0);
tone(piezo, 1000);
delay(500);
```

Aqui:

* o LED verde do pedestre apaga
* o buzzer faz um som
* espera meio segundo

---

```ino
digitalWrite(ledGreenPed, 1);
noTone(piezo);
delay(500);
```

Depois:

* o LED acende novamente
* o som para

Isso cria um **efeito de aviso de fechamento**, parecido com alguns semáforos reais.

---

# Fechando a travessia

```ino
digitalWrite(ledGreenPed, 0);
digitalWrite(ledRedPed, 1);
```

Agora o pedestre volta a receber **sinal vermelho**.

---

# Carros voltam a andar

```ino
digitalWrite(ledRedCar, 0);
digitalWrite(ledGreenCar, 1);
```

O semáforo dos carros volta ao **verde**.

---

# Reinício do tempo

```ino
tempo = millis();
```

Aqui o sistema registra o **novo tempo inicial**.

Isso impede que o botão seja acionado novamente imediatamente.

---

```ino
delay(10);
```

Esse pequeno atraso evita que o Arduino faça leituras rápidas demais.

---

# Conclusão da apresentação

Esse projeto simula o funcionamento de um **semáforo inteligente para pedestres e veículos**.

Quando o pedestre aperta o botão, o sistema:

1. avisa os carros com o sinal amarelo
2. fecha o semáforo para veículos
3. libera a travessia para pedestres
4. emite som quando o tempo está acabando

Esse tipo de sistema é utilizado em **cidades para aumentar a segurança na travessia de pedestres**.

---
