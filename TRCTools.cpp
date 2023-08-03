/*This is where you write the code you want to run*/
#include "Arduino.h"
#include "BlinkLED.h"

void blinkLED(int pin, int delayTime){
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(delayTime);
  digitalWrite(pin, LOW);
  delay(delayTime);  
}