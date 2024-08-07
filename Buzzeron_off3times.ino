const int buzzerpin=5;
void setup() {
pinMode(buzzerpin,OUTPUT);  // put your setup code here, to run once:
}
void loop() 
{
  tone(buzzerpin,500);//500 Hz sound
  delay(1000);
  noTone(buzzerpin);//stop sound
  delay(1000);
  tone(buzzerpin,1000);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
  tone(buzzerpin,1500);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
}
