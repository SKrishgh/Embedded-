const int buzzerpin=5;
const int dhtsensor=A0;
const float temperature=27.0;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerpin,OUTPUT);
  digitalWrite(buzzerpin,LOW);
}
void loop()
{
  int sensorvalue=analogRead(dhtsensor);
  float temp=sensorvalue*(30.0/1023.0)*10;
  Serial.print("Temperature= ");
  Serial.println(temp);
  Serial.print("degrees Celsius");
  if(temp>temperature)
  {
    digitalWrite(buzzerpin, HIGH);
  }
  else 
  {
    digitalWrite(buzzerpin,LOW);
  }
  delay(1000);
}