#define BLYNK_TEMPLATE_ID "TMPL37cY9jVZ2"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "RcYgtofisZuvK--t71v2R2syc9xIDaFb"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Replace with your network credentials
char ssid[] = "Project";
char pass[] = "12345678";

// Replace with your Blynk Auth Token
char auth[] = "RcYgtofisZuvK--t71v2R2syc9xIDaFb";

// GPIO pin where the LED is connected
const int ledPin = 1;  // You can use GPIO number, e.g., 5 for D1 on NodeMCU

// Blynk virtual pin
#define VPIN V1

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Initialize Blynk
  Blynk.begin(auth, ssid, pass);

  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

// This function will be called every time the Blynk button widget is pressed
BLYNK_WRITE(VPIN)
{
  int buttonState = param.asInt(); // Get the state of the button
  digitalWrite(ledPin, buttonState); // Set the LED
}

void loop()
{
  // Run Blynk
  Blynk.run();
}