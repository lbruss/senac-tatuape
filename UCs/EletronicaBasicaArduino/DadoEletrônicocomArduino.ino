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
