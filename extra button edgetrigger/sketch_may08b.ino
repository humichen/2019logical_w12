int ledpin=13;
int btnpin=2;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(btnpin,INPUT);
//digitalWrite(btnpin,HIGH);
}
int btnstate=0;
boolean ledstate=false;
void loop() {
  // put your main code here, to run repeatedly:
btnstate=digitalRead(btnpin);
if(btnstate==HIGH){
  ledstate = !ledstate;
  digitalWrite(ledpin,ledstate);
  delay(200);
}
}
