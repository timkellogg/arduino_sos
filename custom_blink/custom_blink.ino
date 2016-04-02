/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

const byte ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  shortNote();
  longNote();
  shortNote();
  delay(2000);
}

void longNote() {
  int i;

  for (i = 0; i < 3; ++i) 
    digitalWrite(ledPin, HIGH);   
    delay(1000);              
    digitalWrite(ledPin, LOW);
    delay(1000);
}

void shortNote() {
  int i; 

  for (i = 0; i < 3; ++i)
    digitalWrite(ledPin, HIGH);   
    delay(250);              
    digitalWrite(ledPin, LOW);
    delay(250);
}


