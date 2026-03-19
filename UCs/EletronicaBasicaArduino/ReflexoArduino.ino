int ledInicio = 8;
int ledVerde = 6;
int ledVermelho = 7;

int botaoJogo = 2;

int buzzer = 9;

unsigned long tempoInicio;
unsigned long tempoReacao;

int nivel = 1;

void setup() {

  pinMode(ledInicio, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  pinMode(botaoJogo, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  digitalWrite(ledInicio, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, LOW);

  int tempoAleatorio = random(2000, 5000);
  delay(tempoAleatorio);

  digitalWrite(ledInicio, HIGH);

  tempoInicio = millis();

  while (digitalRead(botaoJogo) == HIGH) {
  }

  tempoReacao = millis() - tempoInicio;

  Serial.print("Tempo de reação: ");
  Serial.println(tempoReacao);

  int tempoMaximo;

  switch(nivel) {

    case 1: tempoMaximo = 600; break;
    case 2: tempoMaximo = 550; break;
    case 3: tempoMaximo = 500; break;
    case 4: tempoMaximo = 450; break;
    case 5: tempoMaximo = 400; break;
    case 6: tempoMaximo = 350; break;
    case 7: tempoMaximo = 300; break;
    case 8: tempoMaximo = 270; break;
    case 9: tempoMaximo = 140; break;
    default: tempoMaximo = 100; break;

  }

  if (tempoReacao < tempoMaximo) {

    digitalWrite(ledVerde, HIGH);

    tone(buzzer, 1200);
    delay(200);
    tone(buzzer, 1500);
    delay(200);
    noTone(buzzer);

    Serial.println("Reflexo rápido!");

    if (nivel < 10) {
      nivel++;
    }

  } else {

    digitalWrite(ledVermelho, HIGH);

    tone(buzzer, 400);
    delay(500);
    noTone(buzzer);

    Serial.println("Reflexo lento!");

    nivel = 1;

  }

  Serial.print("Nível atual: ");
  Serial.println(nivel);

  delay(3000);

}
