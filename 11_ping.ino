// C++ code
//
const int pingPin = 7;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long duration,inches,cm;
  
  pinMode(pingPin,OUTPUT);
  digitalWrite(pingPin,LOW);
  
  delayMicroseconds(2);
  
  digitalWrite(pingPin,HIGH);
  
  delayMicroseconds(5);
  
  digitalWrite(pingPin,LOW);
  
  pinMode(pingPin,INPUT);
  duration = pulseIn(pingPin,HIGH);
  
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
}

long microsecondsToInches(long ms){
  return ms/74/2;
}
long microsecondsToCentimeters(long ms){
  return ms/29/2;
}