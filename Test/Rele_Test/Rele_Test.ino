int rele = 8;

void setup() {
  // put your setup code here, to run once:

pinMode(rele,OUTPUT);

}

void loop() {

digitalWrite(rele,HIGH);
delay(500);
digitalWrite(rele,LOW);
delay(500);

}
