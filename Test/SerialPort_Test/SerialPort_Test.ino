const int LED = 8;

void setup()
{

	Serial.begin(9600);

}

//Pro zobrazen� je pot�eba kliknout na ikonku obdelni�ku s le�atou osmi�kou

void loop()
{
	Serial.println("Zdarec");

	Serial.println(78, DEC);
	Serial.println(78, BIN);
	Serial.println(78, OCT);
	Serial.println(78, HEX);

	Serial.println(1.23456, 0);
	Serial.println(1.23456, 2);
	Serial.println(1.23456, 4);

  Serial.println(millis());

}
