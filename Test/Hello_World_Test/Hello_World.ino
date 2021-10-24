void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Hello world!");
  Serial.print("Funguji jiz: ");
  Serial.print(millis());
  Serial.println("milisekund.");
  delay(1500);
}


// Lupa v pravo nahoře
