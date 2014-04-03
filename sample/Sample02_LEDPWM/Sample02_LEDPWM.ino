#define LEDPIN 6

void setup(){
  pinMode(LEDPIN, OUTPUT);
}

void loop(){
  for(unsigned char i=0;i<256;i++)
  {
    analogWrite(LEDPIN,i);
    delay(100);
  }
  for(unsigned char i=255;i>=0;i--)
  {
    analogWrite(LEDPIN,i);
    delay(100);
  }
}
