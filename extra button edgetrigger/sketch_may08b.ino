int ledpin=13;
int btnpin=2;
int btnstate=0;
int oldbtn=0;
boolean ledstate=false;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(btnpin,INPUT);
//digitalWrite(btnpin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
btnstate=digitalRead(btnpin);
if(btnstate==HIGH && oldbtn==0){
  ledstate = !ledstate;
  digitalWrite(ledpin,ledstate);
}
oldbtn=btnstate;
delay(20);
}
