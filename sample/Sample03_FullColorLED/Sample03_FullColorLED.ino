#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

int i =0;
unsigned char r=0,g=0,b=0;
unsigned char brightness[256];

void setup(){
  pinMode(RED_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);
  
  for(int i=0;i<128;i++){
    brightness[i]=i*2;
  }
  for(int i=0;i<128;i++){
    brightness[i+128]=255-i*2;
  }
}

void loop(){
  analogWrite(RED_PIN,brightness[r++]);
  if(i%2==0)analogWrite(GREEN_PIN,brightness[g++]);
  if(i%3==0)analogWrite(BLUE_PIN,brightness[b++]);
  delay(20);
  i++;
}
