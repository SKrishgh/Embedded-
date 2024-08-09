int ledpin=7;
void setup()
{
  pinMode(4, INPUT); //initialize Flame sensor output pin connected pin as input.
  pinMode(7, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);// initialize serial communication @ 9600 baud:
}
void loop()
{
  if (digitalRead(4) == 0 )
  {
    digitalWrite(ledpin, HIGH); // Led ON
    Serial.println("** Fire detected!!! **");
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
  delay(1000);
}