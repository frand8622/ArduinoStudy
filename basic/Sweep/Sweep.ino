

/*
 * refer to 3-4
Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
                // twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

int positions[] = {45, 90, 135, 180};
int finalPos = 180;
int delayTime = 30;

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
  for(pos = 0; pos <= finalPos; pos += 1) // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(delayTime);                       // waits 15ms for the servo to reach the position
  }
  for(pos = finalPos; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees
  {
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(delayTime);                       // waits 15ms for the servo to reach the position
  }

//  moveToPos(positions, 2000);
}

void moveToPos(int positions[], int delayTime)
{
  int size = sizeof(positions)/sizeof(int);
  for(int i = 0; i < size; i++)
  {
    myservo.write(positions[i]);
    delay(delayTime);
  }

  for(int i = size - 1; i >= 0; i--)
  {
    myservo.write(positions[i]);
    delay(delayTime);
  }
}
