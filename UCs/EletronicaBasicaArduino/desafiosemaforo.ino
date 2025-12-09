/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);//Vermelho
  pinMode(12, OUTPUT);//Amarelo
  pinMode(11, OUTPUT);//Verde
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
}
