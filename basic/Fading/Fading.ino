/*
 * refer to 3-3
*/

int pinPorts[] = {9, 6, 5, 3};
int pinPortsSize = 0;
int delayTime = 3;

void setup() {
    pinPortsSize = sizeof(pinPorts)/sizeof(int);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i < pinPortsSize; i++){
    analogLight(pinPorts[i], delayTime);
  } 
}

void analogLight(int pinPort, int delayTime){
  for(int i = 0; i <= 255; i++)
  {
    delay(delayTime);
    analogWrite(pinPort, i);
  }

  for(int i = 255; i >= 0; i--)
  {
    delay(delayTime);
    analogWrite(pinPort, i);
  }
}
