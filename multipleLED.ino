int ledpin= 13;
int ledpin1 =12;
int ledpin2=11;
int ontime=1000;
int offtime=2000;

void setup(){
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}
void loop() {
digitalWrite(ledpin,HIGH);
delay(ontime);
digitalWrite(ledpin1,HIGH);
delay(offtime);
digitalWrite(ledpin2,HIGH);
delay(ontime);  
digitalWrite(ledpin,LOW);
delay(ontime);
  digitalWrite(ledpin1,LOW);
delay(offtime);
  digitalWrite(ledpin2,LOW);
delay(ontime);
  // put your main code here, to run repeatedly:

}

