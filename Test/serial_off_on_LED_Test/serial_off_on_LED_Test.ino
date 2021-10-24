int LED=8;

void setup() 
{
 Serial.begin(9600); 
 
pinMode(LED,OUTPUT);

}
 char receiveVal;
 char flash=0;
void loop() 
{
  if(Serial.available()>0){
    receiveVal=Serial.read();
   
  if(receiveVal=='1'){
    flash=0;
    digitalWrite(LED,HIGH);
    Serial.println("LED is ON");
  }
  if(receiveVal=='0'){
    flash=0;
    digitalWrite(LED,LOW);
    Serial.println("LED is off");
  }
  if(receiveVal=='2'){
    flash=1; 
    
  }
}
    if(flash==1){
      digitalWrite(LED,LOW);
    delay(500);
     digitalWrite(LED,HIGH);
    delay(500);
    Serial.println("LED is flashing");
      }
}
