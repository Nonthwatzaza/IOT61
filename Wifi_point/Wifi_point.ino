#include <ESP8266WiFi.h>
const char* ssid = "Nonthwatzaza";
const char* password = "0897098447";
void setup() { 
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(420);
    Serial.print("*");
  }
  Serial.print("WiFi Now connected M8 ");
  Serial.print("your IP is:");
  Serial.println(WiFi.localIP());  
}

void loop(){

}

// dont forget to open wifi hospot with matching password and ssid 
