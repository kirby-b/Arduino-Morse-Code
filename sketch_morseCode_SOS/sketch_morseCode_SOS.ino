int ledPin = 2;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 2; i++){//S
  digitalWrite(ledPin, HIGH);
  delay(350);
  digitalWrite(ledPin, LOW);
  delay(350);
  }
  for(int i = 0; i <= 2; i++){//O
  digitalWrite(ledPin, HIGH);
  delay(750);
  digitalWrite(ledPin, LOW);
  delay(750);
  }
  for(int i = 0; i <= 2; i++){//S
  digitalWrite(ledPin, HIGH);
  delay(350);
  digitalWrite(ledPin, LOW);
  delay(350);
  }
  delay(5000);
}
