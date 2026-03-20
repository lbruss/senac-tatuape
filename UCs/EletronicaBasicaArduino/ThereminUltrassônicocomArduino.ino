//Theremin

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
