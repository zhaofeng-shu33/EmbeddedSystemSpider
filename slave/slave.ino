int receiveData;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
 receiveData = Serial.parseInt();
  if(receiveData>0)
     Serial.print(receiveData);
  delay(100);
}




