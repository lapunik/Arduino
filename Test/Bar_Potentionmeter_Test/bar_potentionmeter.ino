 int pot=0;
int ar[10];

void setup() 
{
  for(int i=0;i<10;i++)
  {
  ar[i]=i+1;
  pinMode(ar[i],OUTPUT);
  }
  pinMode(pot,INPUT);
}

void On (int input)
{
  for(int i=0;i<10;i++)
  {
  digitalWrite(ar[input],LOW);
  }
  
  for(int i=0;i<input;i++){
  digitalWrite(ar[input-1],HIGH);
  }
}

void loop() {
  
int pocet=round(analogRead(pot)/102.3);

On(pocet);


}



  

/*
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
 int POT=0;

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
  pinMode(POT, INPUT);

}

void loop() {
int POCET=analogRead(POT);
  if((POCET>0)&&(POCET<100)){
    digitalWrite(LED1,HIGH);
  }
  if((POCET>100)&&(POCET<200)){
    digitalWrite(LED2,HIGH);
  }
   if((POCET>200)&&(POCET<300)){
    digitalWrite(LED3,HIGH);
  }
  if((POCET>300)&&(POCET<400)){
    digitalWrite(LED4,HIGH);
  }
   if((POCET>400)&&(POCET<500)){
    digitalWrite(LED5,HIGH);
  }
  if((POCET>500)&&(POCET<600)){
    digitalWrite(LED6,HIGH);
  }
  if((POCET>600)&&(POCET<700)){
    digitalWrite(LED7,HIGH);
  }
  if((POCET>700)&&(POCET<800)){
    digitalWrite(LED8,HIGH);
  }
   if((POCET>800)&&(POCET<900)){
    digitalWrite(LED9,HIGH);
  } 
  if((POCET>900)&&(POCET<1000)){
    digitalWrite(LED10,HIGH);
  }
   if(POCET<=900){
    digitalWrite(LED10,LOW);
  }
  if(POCET<=800){
    digitalWrite(LED9,LOW);   
  }
  if(POCET<=700){
    digitalWrite(LED8,LOW);
  }
  if(POCET<=600){
    digitalWrite(LED7,LOW);
  }
  if(POCET<=500){
    digitalWrite(LED6,LOW);
  }
  if(POCET<=400){
    digitalWrite(LED5,LOW);
  }
  if(POCET<=300){
    digitalWrite(LED4,LOW);
  }
  if(POCET<=200){
    digitalWrite(LED3,LOW);
  }
  if(POCET<=100){
    digitalWrite(LED2,LOW);
  }
  if(POCET<=50){
    digitalWrite(LED1,LOW);
  }
}
  // put your main code here, to run repeatedly:

*/
