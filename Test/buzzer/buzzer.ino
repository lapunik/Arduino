 int led=3;
 int buzz=6;
void setup() {
 pinMode(led, OUTPUT);
 pinMode(buzz, OUTPUT);

}

void loop() {
  
  tone(buzz, 600, 800);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  delay(500);
  delay(500);
  noTone(buzz);
  delay(600);

}
