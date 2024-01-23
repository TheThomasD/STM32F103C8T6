#include <Arduino.h>

bool on = true;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  Serial.println("Hello World!");
  digitalWrite(LED_BUILTIN, on);
  on = !on;
  delay(500);
}
