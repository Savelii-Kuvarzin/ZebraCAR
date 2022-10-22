byte randnumber;
byte pausa;
void setup()
{
  pinMode (2, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (10, OUTPUT);
}

void loop()
{ pausa = random(1,3);
  delay(pausa*10000);
  randnumber = random(1,10);
  if(randnumber % 2 == 0)
  {
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(2, HIGH);
  delay(10000);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  }
  else
  {
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(10, HIGH);
  delay(10000);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  }
  delay(pausa*10000);
}
