#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(12, 13);
int distance;
const int buzzerPin = 8; // Define the pin for the buzzer
const int thresholdDistance = 10; // Distance threshold in cm

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  
  // Control the LED based on the distance
  if (distance < thresholdDistance) {
    digitalWrite(buzzerPin, HIGH); // Turn the LED on
  } else {
    digitalWrite(buzzerPin, LOW); // Turn the LED off
  }
  
delay(1000);
}