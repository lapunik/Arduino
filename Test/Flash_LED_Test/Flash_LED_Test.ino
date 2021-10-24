 int LED1=1;
 int LED2=2;
 int LED3=3;
 int LED4=4;
 int LED5=5;
 int LED6=6;
 int LED7=7;
 int LED8=8;
 int LED9=9;
 int LED10=10;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  pinMode(LED10,OUTPUT);
  
  // put your setup code here, to run once:

}

void blik(int led){
 
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led,LOW);
  
  
}

void loop() {
blik(LED1);
blik(LED2);
blik(LED3);
blik(LED4);
blik(LED5);
blik(LED6);
blik(LED7);
blik(LED8);
blik(LED9);
blik(LED10);
blik(LED9);
blik(LED8);
blik(LED7);
blik(LED6);
blik(LED5);
blik(LED4);
blik(LED3);
blik(LED2);
blik(LED1);

}
  
 
