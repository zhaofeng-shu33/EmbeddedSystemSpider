int A0Value = 0 ;
int A1Value = 0 ;
int A2Value = 0;
void ADGet();
void SerialPrint();

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  ADGet();
  SerialPrint();

  delay( 50 );
  
}

void ADGet()
{
  A0Value = analogRead(14) ;//A0
  A1Value = analogRead(15) ;//A1
  A2Value = analogRead(16) ;//A2
  A0Value = map ( A0Value , 0 , 1024 , 0 , 3 )  ;
  A1Value = map ( A1Value , 0 , 1024 , 0 , 3 )  ;
  A2Value = map ( A2Value , 0 , 1024 , 70,140) ;
  //_Button_Left= digitalRead(2);
  //_Button_Right=digitalRead(3);
}
/*
boolean pressButton(int a)
{
  int  button =digitalRead(a);
  if (button==0)
  {
    delay(10);
    button=digitalRead(a);
    if( button==0)
    {
    return 1;
    }
    else return 0;
  }
  return 0;
}
*/

void SerialPrint()
{
/*  if(pressButton(2))
  {
    Serial.print(10+A2Value*16);
    Serial.println();
  }
  if(pressButton(3))
  {
    Serial.print(11+A2Value*16);
    Serial.println();
  }
 */
  if (( ( ( A0Value ) == ( 0 ) ) && ( ( A1Value ) == ( 1 ) ) ))
  {
    Serial.print(1+A2Value*16);
    Serial.println();
  }
  if (( ( ( A0Value ) == ( 2 ) ) && ( ( A1Value ) == ( 1 ) ) ))
  {
    Serial.print(2+A2Value*16);
    Serial.println();
  }
  if (( ( ( A0Value ) == ( 1 ) ) && ( ( A1Value ) == ( 1 ) ) ))
  {
    Serial.print(3+A2Value*16);//stop
    Serial.println();
  }
  if (( ( ( A0Value ) == ( 1 ) ) && ( ( A1Value ) == ( 2 ) ) ))
  {
    Serial.print(4+A2Value*16);
    Serial.println();
  }
  if (( ( ( A0Value ) == ( 1 ) ) && ( ( A1Value ) == ( 0 ) ) ))
  {
    Serial.print(5+A2Value*16);
    Serial.println();
  }
}

