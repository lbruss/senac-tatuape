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
