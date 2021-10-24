int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;

int button = 11;
int oldState = 0;
int change = 0;
int casovaKonstanta = 100;



void setup()
{
	pinMode(pin1,OUTPUT);
	pinMode(pin2, OUTPUT);
	pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
	pinMode(pin5, OUTPUT);
	pinMode(pin6, OUTPUT);
	pinMode(pin7, OUTPUT);
	pinMode(pin8, OUTPUT);
	pinMode(pin9, OUTPUT);
	pinMode(pin10, OUTPUT);

	pinMode(button,INPUT);
	
}

void Delay(int time)
{
	for (int i = 0; i < time;i++) {
		delay(1);
		Change();
	}
}

void Change() 
{
	if (digitalRead(button)==LOW) 
	{
		change = 1;

		while (digitalRead(button) == LOW) 
		{
		
		}
	}

}

void Akce(int pin, int stav) 
{
	digitalWrite(pin, stav);
	Delay(casovaKonstanta);
}

void loop()
{

	if (oldState == 0)
	{

		Akce(pin1, HIGH);
		Akce(pin2, HIGH);
		Akce(pin3, HIGH);
		Akce(pin4, HIGH);
		Akce(pin5, HIGH);
		Akce(pin6, HIGH);
		Akce(pin7, HIGH);
		Akce(pin8, HIGH);
		Akce(pin9, HIGH);
		Akce(pin10, HIGH);

		digitalWrite(pin1, LOW);
		digitalWrite(pin2, LOW);
		digitalWrite(pin3, LOW);
		digitalWrite(pin4, LOW);
		digitalWrite(pin5, LOW);
		digitalWrite(pin6, LOW);
		digitalWrite(pin7, LOW);
		digitalWrite(pin8, LOW);
		digitalWrite(pin9, LOW);
		digitalWrite(pin10, LOW);

	}
	else if (oldState == 1)
	{
		Akce(pin1, HIGH);
		digitalWrite(pin1, LOW);
		Akce(pin2, HIGH);
		digitalWrite(pin2, LOW);
		Akce(pin3, HIGH);
		digitalWrite(pin3, LOW);
		Akce(pin4, HIGH);
		digitalWrite(pin4, LOW);
		Akce(pin5, HIGH);
		digitalWrite(pin5, LOW);
		Akce(pin6, HIGH);
		digitalWrite(pin6, LOW);
		Akce(pin7, HIGH);
		digitalWrite(pin7, LOW);
		Akce(pin8, HIGH);
		digitalWrite(pin8, LOW);
		Akce(pin9, HIGH);
		digitalWrite(pin9, LOW);
		Akce(pin10, HIGH);
		digitalWrite(pin10, LOW);
	
	}
	else if (oldState == 2)
	{
	
		digitalWrite(pin5, HIGH);
		Akce(pin6, HIGH);
		digitalWrite(pin4, HIGH);
		Akce(pin7, HIGH);
		digitalWrite(pin3, HIGH);
		Akce(pin8, HIGH);
		digitalWrite(pin2, HIGH);
		Akce(pin9, HIGH);
		digitalWrite(pin1, HIGH);
		Akce(pin10, HIGH);

		digitalWrite(pin1, LOW);
		digitalWrite(pin2, LOW);
		digitalWrite(pin3, LOW);
		digitalWrite(pin4, LOW);
		digitalWrite(pin5, LOW);
		digitalWrite(pin6, LOW);
		digitalWrite(pin7, LOW);
		digitalWrite(pin8, LOW);
		digitalWrite(pin9, LOW);
		digitalWrite(pin10, LOW);


	}
	else if (oldState == 3)
	{

		int randomNumber = random(1, 10);

		switch (randomNumber) 
		{
		case 0:
			Akce(pin1, HIGH);
			digitalWrite(pin1, LOW);
			return;
		case 1:
			Akce(pin2, HIGH);
			digitalWrite(pin2, LOW);
			return;
		case 2:
			Akce(pin3, HIGH);
			digitalWrite(pin3, LOW);
			return;
		case 3:
			Akce(pin4, HIGH);
			digitalWrite(pin4, LOW);
			return;
		case 4:
			Akce(pin5, HIGH);
			digitalWrite(pin5, LOW);
			return;
		case 5:
			Akce(pin6, HIGH);
			digitalWrite(pin6, LOW);
			return;
		case 6:
			Akce(pin7, HIGH);
			digitalWrite(pin7, LOW);
			return;
		case 7:
			Akce(pin8, HIGH);
			digitalWrite(pin8, LOW);
			return;
		case 8:
			Akce(pin9, HIGH);
			digitalWrite(pin9, LOW);
			return;
		case 9:
			Akce(pin10, HIGH);
			digitalWrite(pin10, LOW);
			return;
		
		}

	}

	if (change == 1)
	{
		if (oldState == 0)
		{
			oldState = 1;
			casovaKonstanta = 50;
		}
		else if (oldState == 1)
		{
			oldState = 2;
			casovaKonstanta = 100;
		}
		else if (oldState == 2)
		{
			oldState = 3;
			casovaKonstanta = 250;
		}
		else if(oldState == 3)
		{
			oldState = 0;
			casovaKonstanta = 1000;
		}
	}

	change = 0;

}
