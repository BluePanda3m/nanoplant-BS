#include <Arduino.h>

// put function declarations here:
int soilpin = A6;
int ledpin = 13;
int threshold = 500;
void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  int soilValue = analogRead(soilpin);
  if (soilValue < threshold) {
    Serial.println("Soil is dry");
    digitalWrite(ledpin, HIGH);
  } else {
    Serial.println("Soil is wet");
    digitalWrite(ledpin, LOW);
  }
  // put your main code here, to run repeatedly:
}
