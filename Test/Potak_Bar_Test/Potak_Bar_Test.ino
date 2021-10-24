int pin[10];

int analogPin0 = 0;

int analogValue = 0;

void setup()
{
	for (int i = 0; i < 10; i++) 
	{
		pin[i] = i+1;

        pinMode(pin[i], OUTPUT);
	}

	pinMode(analogPin0, INPUT);
	
}

void managerLED(int on)
{

	for (int i = 0; i < 10; i++)
	{
		if (i < on) {

			digitalWrite(pin[i], HIGH);
		}
		else 
		{
			digitalWrite(pin[i], LOW);
		}
	}
}

void loop()
{
	analogValue = analogRead(analogPin0);

	int numberOfLED = round(analogValue/102.3);

	managerLED(numberOfLED);


}
