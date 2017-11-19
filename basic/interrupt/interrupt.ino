int ledPin = 9; 

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(2, ledON, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogLight(ledPin, 5);
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

void ledON()
{
//  digitalWrite(13, 1);
//  delay(2000);
//  digitalWrite(13, 0);
//  delay(100);  

  for(int i = 0; i < 5; i++)
  analogLight(12, 5);
}
