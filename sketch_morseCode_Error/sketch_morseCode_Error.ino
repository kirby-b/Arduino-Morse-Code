int ledPin = 5;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  dot(); //E
  delay(100);
  for(int i = 0; i <= 1; i++){//rr
  dot();
  dash();
  dot();
  delay(100);
  }
  for(int i = 0; i <= 2; i++){//o
  dash();
  delay(100);
  }
  dot(); //r
  dash();
  dot();
  delay(100);

  delay(5000);
}

void dot(){
  digitalWrite(ledPin, HIGH);
  delay(350);
  digitalWrite(ledPin, LOW);
  delay(350);
}

void dash(){
  digitalWrite(ledPin, HIGH);
  delay(750);
  digitalWrite(ledPin, LOW);
  delay(750);
}