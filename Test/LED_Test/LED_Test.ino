int led1 = 13;  //první dioda
int led2 = 12; //druhá dioda
int led3= 11; 
int led4= 10; 
int led5= 9; 

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
}
void blik(int led,int kolik)
{
  for(int i=0;i<kolik;i++)
  {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(200);
  }
 
  
  }
void loop()
{ 
blik(led1,1);
blik(led2,2);
blik(led3,3);
blik(led4,4);
blik(led5,5);
  
  
}
