int ledPin = 9; 
int ledPinIr = 12; //init the pin which will be ledON when pin 2 be interrupted

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
}

void loop() {

  if(ledPinIr == 12)
    attachInterrupt(2, ledON, LOW);
  else
    attachInterrupt(2, ledON, LOW);
  
  // put your main code here, to run repeatedly:
  analogLight(ledPin, 2);
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

  if(ledPinIr == 11) ledPinIr = 12;
  else ledPinIr = 11;

  for(int i = 0; i < 2; i++)
    analogLight(ledPinIr, 2); 
}
