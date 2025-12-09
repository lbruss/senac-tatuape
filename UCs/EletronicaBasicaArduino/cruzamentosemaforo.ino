/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);//Vermelho A
  pinMode(12, OUTPUT);//Amarelo A
  pinMode(11, OUTPUT);//Verde A
  
  pinMode(10, OUTPUT);//Vermelho B
  pinMode(9, OUTPUT);//Amarelo B
  pinMode(8, OUTPUT);//Verde B
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);//Não sei se deixo assim ou eu tiro este delay
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
}
