/*
 * LDR regelt potmeter
 * Zet LED aan als er weinig licht op de LDR valt
 * Zet LED uit als er veel licht op de LDR valt
 */

#include <Arduino.h>

int ldrPin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // instellen van de console
}

void loop() {
  // het uitlezen van een potmeter en ldr is
  // in principe hetzelfde: een analoge waarde;
  int analogeWaarde = analogRead(ldrPin);

  //stuur deze waarde naar de console op de computer om het
  //op gemakkelijke manier zichtbaar te maken
  Serial.println(analogeWaarde);
  delay(50); // wacht even, zodat er niet veel te snel regels op de console komen

  if (analogeWaarde > 500) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}