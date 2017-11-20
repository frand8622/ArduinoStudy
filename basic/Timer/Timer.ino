/*
 * refer to 4-3
*/

#include "CurieTimerOne.h"

int pinPorts[] = {6, 5, 3};
int pinPortsSize = 0;
int maxAnalogValue = 250;
int delayTime = 2;

void setup() {

  CurieTimerOne.start(1000000, light13Pin);
  CurieTimerOne.start(2000000, light12Pin); //only pin 12 will be timed 
  
  pinPortsSize = sizeof(pinPorts)/sizeof(int);
}

void loop() {
  for(int i = 0; i < pinPortsSize; i++)
  {
    analogLight(pinPorts[i], delayTime);
  } 
}

void analogLight(int pinPort, int delayTime){
  for(int i = 0; i <= maxAnalogValue; i++)
  {
    delay(delayTime);
    analogWrite(pinPort, i);
  }

  for(int i = maxAnalogValue; i >= 0; i--)
  {
    delay(delayTime);
    analogWrite(pinPort, i);
  }
}

void light13Pin(){
  digitalWrite(13, 1);
  delay(200);
  digitalWrite(13, 0);
}

void light12Pin(){
  digitalWrite(12, 1);
  delay(100);
  digitalWrite(12, 0);
}
