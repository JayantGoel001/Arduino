// C++ code
//
const int buttonPin = 2;
const int ledPin = 13;

int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState!=lastButtonState){
    if(buttonState == HIGH){
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("Number of Push Button:");
      Serial.println(buttonPushCounter);
    }else{
      Serial.println("off");
    }
    delay(50);
  }
  
  lastButtonState = buttonState;
  
  if(buttonPushCounter%4==0){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }
}