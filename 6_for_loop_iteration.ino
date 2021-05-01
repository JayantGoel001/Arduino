int timer = 1000;
void setup(){
  for(int thisPin=2;thisPin<=7;thisPin++){
    pinMode(thisPin,OUTPUT);
  }
}
void loop(){
  for(int thisPin=2;thisPin<=7;thisPin++){
    digitalWrite(thisPin,HIGH);
    delay(timer);
    digitalWrite(thisPin,LOW);
  }
  delay(timer/10);
  for(int thisPin=7;thisPin>=2;thisPin--){
    digitalWrite(thisPin,HIGH);
    delay(timer);
    digitalWrite(thisPin,LOW);
  }
}