int LED = 8;

void setup()
{

	pinMode(LED, OUTPUT);
	Serial.begin(9600);

}


void loop()
{
	String data;

	int i = 0;

	while(Serial.available()>0)
	{
		data = Serial.readString();

		if (data == "on")
		{
			digitalWrite(LED, HIGH);
			Serial.println("LED sviti");
		}
		else if (data == "off") 
		{
			digitalWrite(LED, LOW);
			Serial.println("LED nesviti");
		}
	}



}
