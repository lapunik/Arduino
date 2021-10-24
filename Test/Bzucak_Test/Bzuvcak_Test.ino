#define  c     261
#define  d     294 
#define  e     329 
#define  f     349 
#define  g     392 
#define  a     440 
#define  b     493 
#define  C     523 
int bzucak = 8;

void setup()
{

	pinMode(bzucak, OUTPUT);

}

// Add the main program code into the continuous loop() function
void loop()
{

	tone(bzucak, c, 1000);


}
