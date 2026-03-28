int ledVerde  = 4;
int ledGiallo = 8;
int ledRosso = 13;
int pulsante = 2;

void setup(){
  pinMode(ledVerde, OUTPUT);
  pinMode(ledGiallo,OUTPUT);
  pinMode(ledRosso, OUTPUT);
  pinMode(pulsante, INPUT_PULLUP);
}
 
void loop(){
  int stato = digitalRead(pulsante);

  if(stato==LOW){
    digitalWrite(ledVerde,HIGH);
    delay(300);
    digitalWrite(ledVerde,LOW);
    delay(300);

    digitalWrite(ledGiallo,HIGH);
    delay(300);
    digitalWrite(ledGiallo,LOW);
    delay(300);

    digitalWrite(ledRosso,HIGH);
    delay(300);
    digitalWrite(ledRosso,LOW);
    delay(300);

  }else{
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledGiallo,LOW);
    digitalWrite(ledRosso,LOW);
  }
}

 