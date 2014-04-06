#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

int i =0;
unsigned char r=0,g=0,b=0;

void setup(){
  pinMode(RED_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);
}

void loop(){
  analogWrite(RED_PIN,r++);
  if(i%2==0)analogWrite(GREEN_PIN,g++);
  if(i%3==0)analogWrite(BLUE_PIN,b++);
  delay(10);
  i++;
}
