int LED = 11;
int Button = 2;
int oldState;

void setup()
{

	pinMode(LED,OUTPUT);
	pinMode(Button,INPUT);


}

void loop()
{

	//Button HIGHT == nezmáèknutý

	if (digitalRead(Button) == LOW)
	{
		if (oldState == HIGH)
		{
			digitalWrite(LED, LOW);

			oldState = LOW;
		}
		else
		{
			digitalWrite(LED, HIGH);

			oldState = HIGH;
		}

		//attachInterrup(LED,ISR,CHANGE); // taky pøepínaè

		while (digitalRead(Button) == LOW);
		{


		}

	}

}
