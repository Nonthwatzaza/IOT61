#define SW 14
#define LED 16

int count =0;

void setup() {
pinMode(LED,OUTPUT);
pinMode(SW,INPUT_PULLUP);
digitalWrite(LED,LOW);
}

void loop() {
  if(digitalRead(SW) ==0)
  {
    digitalWrite(LED,HIGH);
    delay(420);
    digitalWrite(LED,LOW);
    delay(420);
  }
}
