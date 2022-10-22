byte randnumber;                //This is a variable, that is responsible for random choose of left or right chamber's section
byte pausa;                     //This is a variable, that is responsible for random pausa duration (so as not to cause the conditioning of time)
void setup()
{
  pinMode (2, OUTPUT);          //Relay to ON the current in the left part of chamber
  pinMode (7, OUTPUT);          //Diodes from the left part of chamber
  pinMode (8, OUTPUT);          //Relay to ON the current in the left part of chamber
  pinMode (10, OUTPUT);         //Diodes from the right part of chamber
}

void loop()
{ pausa = random(1,3);
  delay(pausa*10000);
  randnumber = random(1,10);
  if(randnumber % 2 == 0)       //If even, than stimulation will be in right part of chamber
  {
  digitalWrite(7, HIGH);        //5 seconds light without current
  delay(5000);
  digitalWrite(2, HIGH);        //10 seconds light with current
  delay(10000);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  }
  else                           //If odd, than stimulation will be in left part of chamber
  {
  digitalWrite(8, HIGH);         //5 seconds light without current
  delay(5000);
  digitalWrite(10, HIGH);        //10 seconds light with current
  delay(10000);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  }
  delay(pausa*10000);            //time-out with random duration
}
