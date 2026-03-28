int i = 0;
int led = 12;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop(){
  for (i = 0; i < 255; i++ ) {
    analogWrite(12, i);
    delay(10);
  }
  for (i = 255; i > 0; i-- ) {
    analogWrite(12, i);
  }
}