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
