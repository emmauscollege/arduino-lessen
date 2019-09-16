/*
 * Potmeter
 * Laat LED knipperen
 * De stand van de potemeter bepaalt de knippersnelheid
 */

#include <Arduino.h>

int potMeterPin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  // pinMode van A0 hoeven we niet te zetten, deze staat standaard op INPUT
  Serial.begin(9600); // instellen van de console
}

void loop() {
   //analogeWaarde varieert van 0 tot 1023, afhankelijk van de stand van de potmeter
   int analogeWaarde = analogRead(potMeterPin);

  //stuur deze waarde naar de console op de computer om het
  //op gemakkelijke manier zichtbaar te maken
  Serial.println(analogeWaarde);

  //Bepaal de wachttijd voor knipperen
  //Het minimum is 100 milliseconde
  //Het maximum is ruim 1 seconde, namelijk 1023+100 milliseconde
  int wachttijd = analogeWaarde + 100;

  //laat de LED knipperen in het tempo van de berekende wachttijd:
  digitalWrite(ledPin, HIGH);
  delay(wachttijd);
  digitalWrite(ledPin, LOW);
  delay(wachttijd);
}
