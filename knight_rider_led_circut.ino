void setup()
{
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  int reading = analogRead(A0);
  float voltage = reading * 5.0;
  voltage /= 1024.0; 
  float tempC = (voltage - 0.5) * 100 ;
  float tempK = tempC + 273;
  if(tempK >= 279 )
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }
}
