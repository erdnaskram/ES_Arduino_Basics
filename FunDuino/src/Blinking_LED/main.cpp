#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT); //Pin 13 is supposed to be an output
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.print("on");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.print("off");
  delay(1000);
}