#define D5 14
#define SW D5
#define LED 16
#define D0 16                   //set up hardware phase

void setup()
  {
    pinMode (LED,OUTPUT);
    pinMode (SW,INPUT_PULLUP);
    digitalWrite(LED,LOW);
  }                           //set up phase


  
void loop()                   // command phase
{
   if(digitalRead(SW)==0)    // 0=on 1= (not-press) off
    {
      digitalWrite(LED,HIGH);
      delay(1000);
      digitalWrite(LED,LOW);
      delay(1000);          
  }
}
