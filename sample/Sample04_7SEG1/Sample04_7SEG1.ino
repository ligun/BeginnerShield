#define DATA_A_PIN 14
#define DATA_B_PIN 15
#define DATA_C_PIN 16
#define DATA_D_PIN 17
#define SELECT1_PIN 12
#define SELECT2_PIN 13

int i=0;

void setup(){
  pinMode(DATA_A_PIN,OUTPUT);
  pinMode(DATA_B_PIN,OUTPUT);
  pinMode(DATA_C_PIN,OUTPUT);
  pinMode(DATA_D_PIN,OUTPUT);
  pinMode(SELECT1_PIN,OUTPUT);
  pinMode(SELECT2_PIN,OUTPUT);
}

void loop(){
  digitalWrite(SELECT1_PIN,LOW);
  
  digitalWrite(DATA_A_PIN,i&0b0001);
  digitalWrite(DATA_B_PIN,i&0b0010);
  digitalWrite(DATA_C_PIN,i&0b0100);
  digitalWrite(DATA_D_PIN,i&0b1000);
  
  digitalWrite(SELECT1_PIN,HIGH);
  
  if(++i==10)i=0;
  delay(1000);
}
