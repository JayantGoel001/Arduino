// C++ code
//
void setup()
{
  Serial.begin(9600);
  for(int i=2;i<=7;i++){
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  if(Serial.available()>0){
    int inByte = Serial.read();
    switch(inByte){
      case 'a':
      	digitalWrite(2,HIGH);
      	break;
      case 'b':
      	digitalWrite(3,HIGH);
      	break;
      case 'c':
      	digitalWrite(4,HIGH);
      	break;
      case 'd':
      	digitalWrite(5,HIGH);
      	break;
      case 'e':
      	digitalWrite(6,HIGH);
      	break;
      case 'f':
      	digitalWrite(7,HIGH);
      	break;
      default:
      	for(int i = 2;i<=7;i++){
          digitalWrite(i,LOW);
      	}
    }
  }
}