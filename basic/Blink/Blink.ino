/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 19 Nov 2017
  by Frand Fang

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int pinPorts[] = {8, 9, 10, 11, 12};
int pinPortsSize = 0;
int delayTime = 50;

// the setup function runs once when you press reset or power the board
void setup() {
    pinPortsSize = sizeof(pinPorts)/sizeof(int);
    
  // initialize digital pin LED_BUILTIN as an output.
  // actually, it doesn't need to initi.
    for(int i = 0; i < pinPortsSize; i++){
      initPin(pinPorts[i]);
    }
}

// the loop function runs over and over again forever
void loop() {
    for(int i = 0; i < pinPortsSize; i++){
      setLight(pinPorts[i], delayTime);
    }
}


void initPin(int pinPort){
  if(pinPort % 2 == 0)
    digitalWrite(pinPort, LOW);
  else
    digitalWrite(pinPort, HIGH);
}

void setLight(int pinPort, int delayTime){
  digitalWrite(pinPort, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);             // wait for a delaytime
  digitalWrite(pinPort, LOW);   // turn the LED off by making the voltage LOW
  delay(delayTime);             // wait for a delaytime
}
