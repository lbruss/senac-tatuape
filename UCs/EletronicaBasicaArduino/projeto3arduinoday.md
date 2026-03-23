# Sensor LDR

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
#define LED 9  
#define LDR 0  

int luz = 0;       
int valor_sensor = 0;       
int valor_limite = 490;  


void setup() {     
  Serial.begin(9600);    
  pinMode(LED,OUTPUT);
  pinMode(LDR,INPUT);
}

void loop ()  
{
  valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/1024.0; 
  Serial.print(luz);  
  Serial.println(" Luz");             
  delay(300);                       
  
  if (luz <= valor_limite)   
  {
    digitalWrite (LED, LOW);  
  }
  if (luz > valor_limite)   
  {
    digitalWrite (LED, HIGH);  
  }
}
```

---

# O projeto



---

# Explicação dos códigos e o que se pode falar na hora da explicação:

Vou montar novamente **um roteiro de apresentação para feira de ciências**, igual aos outros projetos:

* linguagem **simples**
* explicação **linha por linha**
* dividido para **duas pessoas** 👥
* fácil para qualquer pessoa entender.

---

# Pessoa 1 — Introdução, Arduino e início do código

No nosso projeto, o Arduino mede a quantidade de luz no ambiente e **liga ou desliga um LED dependendo da iluminação**.

Esse tipo de sistema é usado, por exemplo, em **lâmpadas automáticas de postes ou iluminação externa**.

---

# Definição dos pinos

```ino
#define LED 9
#define LDR 0
```

Aqui estamos definindo onde os componentes estão conectados no Arduino.

* **LED** → pino 9
* **LDR** → entrada analógica 0

O **LDR (Light Dependent Resistor)** é um sensor que muda sua resistência dependendo da quantidade de luz.

Quanto **mais luz**, menor é a resistência.
Quanto **menos luz**, maior é a resistência.

---

# Declaração das variáveis

```ino
int luz = 0;
int valor_sensor = 0;
int valor_limite = 490;
```

Aqui criamos três variáveis:

* **luz** → guarda o valor calculado da luz
* **valor_sensor** → guarda a leitura do sensor
* **valor_limite** → define o limite que decide se o LED liga ou não

Esse valor limite funciona como um **ponto de decisão** para o sistema.

---

# Função setup()

```ino
void setup() {
```

Essa função roda **apenas uma vez quando o Arduino é ligado**.

---

```ino
Serial.begin(9600);
```

Essa linha inicia a comunicação com o computador.

Ela permite que o Arduino envie informações para o **Monitor Serial**, mostrando os valores de luz detectados.

---

```ino
pinMode(LED,OUTPUT);
```

Aqui definimos que o LED é um **dispositivo de saída**, ou seja, o Arduino irá controlar quando ele liga ou desliga.

---

```ino
pinMode(LDR,INPUT);
```

Aqui definimos que o LDR é um **dispositivo de entrada**, pois o Arduino irá ler informações vindas dele.

---

# Pessoa 2 — Funcionamento do sistema

## Função principal

```ino
void loop ()
```

Essa é a função principal do programa.

Ela roda **continuamente enquanto o Arduino estiver ligado**.

---

# Leitura do sensor

```ino
valor_sensor = analogRead(LDR);
```

Aqui o Arduino lê o valor do sensor de luz.

O valor lido pode variar de **0 até 1023**, dependendo da quantidade de luz.

---

# Conversão do valor de luz

```ino
luz = (5.0 * valor_sensor * 100.0)/1024.0;
```

Essa linha faz um cálculo para transformar o valor do sensor em um número mais fácil de interpretar.

Basicamente ela converte a leitura em um **valor proporcional à quantidade de luz no ambiente**.

---

# Exibição no monitor serial

```ino
Serial.print(luz);
Serial.println(" Luz");
```

Essas linhas mostram no computador o valor da luz detectada.

Isso ajuda a acompanhar como o sensor está reagindo à iluminação.

---

```ino
delay(300);
```

Aqui o programa espera **300 milissegundos** antes de fazer uma nova leitura.

Isso evita que o Arduino faça leituras rápidas demais.

---

# Verificação da luz

```ino
if (luz <= valor_limite)
```

Aqui o sistema verifica se a quantidade de luz está **abaixo do limite definido**.

Isso significa que o ambiente está **escuro**.

---

```ino
digitalWrite (LED, LOW);
```

Nesse caso o LED **fica desligado**.

---

```ino
if (luz > valor_limite)
```

Aqui o sistema verifica se a quantidade de luz está **acima do limite**.

Isso significa que o ambiente está **mais claro**.

---

```ino
digitalWrite (LED, HIGH);
```

Então o LED **acende**.

---

# Conclusão da apresentação

Esse projeto mostra como o Arduino pode **usar sensores para tomar decisões automaticamente**.

No nosso caso:

* o sensor LDR mede a **quantidade de luz**
* o Arduino analisa essa informação
* e decide **ligar ou desligar o LED**

Esse tipo de tecnologia é muito usada em sistemas de **automação residencial, iluminação automática e sensores inteligentes**.

---
