#define LEDPIN 6

void setup(){
  pinMode(LEDPIN, OUTPUT);
}

void loop(){
  for(int i=0;i<256;i++)
  {
    analogWrite(LEDPIN,i);
    delay(10);
  }
  for(int i=0;i<256;i++)
  {
    analogWrite(LEDPIN,255-i);
    delay(10);
  }
}
