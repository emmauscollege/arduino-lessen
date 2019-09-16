/*
 * Knop
 * Zet LED aan als knop is ingedrukt
 * Zet LED uit als knop niet is ingedrukt
 */

#include <Arduino.h>

// voor ons gemak:
int buttonPin = 2;
int ledPin = 13;

void setup() {

  //configureer pin 2 als input
  pinMode(buttonPin, INPUT);
  
  //configureer poort 13 als output
  pinMode(ledPin, OUTPUT);

}

void loop() {
  //lees waarde de inputpoort 2 uit en stop deze waarde in
  //een variabele genaamd sensorWaarde
  int sensorWaarde = digitalRead(buttonPin);

  //als de knop wordt ingedrukt, is de sensorWaarde LOW
  //(zie opmerking in regels 9-11)
  //als de knop wordt ingedrukt, zetten we spanning op de ledPin
  //zo niet, dan geen spanning
  if (sensorWaarde == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
