# Comentários no Código Arduino

Os comentários não são executados pelo microcontrolador. Eles servem para documentar e explicar o código.

```C
/**
 * Comentário de Cabeçalho
 * Explica objetivo, autor, data, licença, etc.
 */

/*
  Comentário em Bloco
  Usado para várias linhas ou para desativar partes do código.
*/

// Comentário em Linha
// Explica instruções individuais.


 Boas Práticas

 Use comentários para explicar o "porquê" do código
 Seja claro e objetivo
 Atualize os comentários quando modificar o código

 Evite comentários óbvios demais
 Não deixe comentários desatualizados ou confusos


 Projeto: Piscar LED

Exemplo clássico para iniciantes: fazer um LED no pino 13 piscar a cada 1 segundo.

/**
 * Exemplo: Piscar LED
 * Autor: Bruss Loza
 * Objetivo: Demonstrar uso de saídas digitais
 */
 
void setup() {
  pinMode(13, OUTPUT); // define o pino 13 como saída
}

void loop() {
  digitalWrite(13, HIGH); // acende o LED
  delay(1000);            // espera 1 segundo (1000 ms)
  digitalWrite(13, LOW);  // apaga o LED
  delay(1000);            // espera 1 segundo
}

 Comandos Importantes

Comando	Função	Exemplo

pinMode(pino, OUTPUT)	Configura o pino como saída	pinMode(13, OUTPUT);
digitalWrite(pino, HIGH)	Envia 5V (liga o dispositivo)	digitalWrite(13, HIGH);
digitalWrite(pino, LOW)	Envia 0V (desliga o dispositivo)	digitalWrite(13, LOW);
delay(ms)	Pausa o programa em milissegundos	delay(1000); // 1 segundo



---

 Sobre o Delay

delay(1000) → 1 segundo

delay(500) → 0,5 segundo

delay(100) → 0,1 segundo


Quanto menor o valor, mais rápido o LED pisca.

---

 Conclusão

O projeto Pisca LED é o primeiro passo no mundo Arduino,
perfeito para aprender como controlar saídas digitais e
entender a lógica básica de programação embarcada.

Semaforo

teste

/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void loop()
{

}

###semaforo de fato###

/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  delay(2000);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}
