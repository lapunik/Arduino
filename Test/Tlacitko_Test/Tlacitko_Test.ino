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

	//Button HIGHT == nezm��knut�

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

		//attachInterrup(LED,ISR,CHANGE); // taky p�ep�na�

		while (digitalRead(Button) == LOW);
		{


		}

	}

}
