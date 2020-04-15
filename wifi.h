#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

void setupWiFiMulti(){
    delay(10);
    wifiMulti.addAP("The World Coffee 3", "theworldcoffee114");
      
    // Wait for connect to WiFi
    Serial.print("\n\n\nConnecting to WiFi...");
  
    int tries = 0;
    while (wifiMulti.run() != WL_CONNECTED) {
      delay(200);
      Serial.print(".");
      tries++;
      if (tries > 50) {
        delay(5000);
        ESP.restart();
        break;
      }
    }
  
    // print your WiFi info
    IPAddress ip = WiFi.localIP();
    Serial.println();
    Serial.print("Connected to ");
    Serial.print(WiFi.SSID());
    Serial.print(" with IP: ");
    Serial.println(ip); 
}

