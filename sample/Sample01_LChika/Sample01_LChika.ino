#define LEDPIN 6

void setup(){
  pinMode(LEDPIN, OUTPUT);
}

void loop(){
  digitalWrite(LEDPIN,HIGH);
  delay(1000);
  digitalWrite(LEDPIN,LOW);
  delay(1000);
}
