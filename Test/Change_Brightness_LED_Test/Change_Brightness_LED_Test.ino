int led = 11; // pin, ke kterému je LED připojena
int brightness = 0; // jas LED
int fadeAmount = 1; // o kolik jednotek se změní hodnota při jednom kroku

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
  
    analogWrite(led, brightness);

    brightness = brightness + fadeAmount;

    if (brightness == 0 || brightness == 255) {
        fadeAmount = -fadeAmount ;
    }
    
    delay(3);
}
