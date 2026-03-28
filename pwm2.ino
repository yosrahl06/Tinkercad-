int i = 0;
int led = 8;
int pinPont = A0;
int pinValore = 0;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop(){
  pinValore = analogRead(pinPont);
  int luminosita = map(pinValore, 0, 1023, 0, 255);
  analogWrite(led, luminosita);

}