int ledpin= 13;
int ledpin1 =12;
int ledpin2=11;
int ontime=1000;
int offtime=2000;

void setup(){
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
//uSING LOOPS TO RUN A SINGLE BLOCK OF CODE MULTIPLE TIMES IN LOOP FUNCTION
  Serial.println("RED IS GOING TO HIGH");
  for(int i=0;i<=2;i++){
digitalWrite(ledpin,HIGH);
    delay(ontime);
digitalWrite(ledpin,LOW);
delay(offtime);
Serial.println(i);}

digitalWrite(ledpin1,HIGH);
delay(ontime);  
digitalWrite(ledpin1,LOW);
delay(ontime);
digitalWrite(ledpin2,HIGH);
delay(offtime);
digitalWrite(ledpin2,LOW);
delay(ontime);


}

