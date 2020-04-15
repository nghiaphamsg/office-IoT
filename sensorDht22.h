#include "DHT.h"

// Global variables
long previousMillis = 0;
long interval = 2000;
#define DHTPIN 5    //Sensor DHT22
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void loop_dht22() {
  // put your main code here, to run repeatedly:
    unsigned long currentMillis = millis();
    if(currentMillis - previousMillis > interval) {
      float h = dht.readHumidity();
      float t = dht.readTemperature();
      float f = dht.readTemperature(true);
      if (isnan(h) || isnan(f) || isnan(t)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
      }
      previousMillis = currentMillis;
      Serial.print("Humidity: ");
      Serial.print(h);
      Serial.print(" %\t");
      Serial.print("Temperature: ");
      Serial.print(t);
      Serial.print(" *C ");
      Serial.print(f);
      Serial.print(" *F\t");
      Serial.println("DTH sensor read and transmitted");
  
      pubSubClient.publish("sensor/temperature_follow_C", String(t).c_str(), true);
      pubSubClient.publish("sensor/temperature_follow_F", String(f).c_str(), true);
      pubSubClient.publish("sensor/humidity", String(h).c_str(), true);
  }

}
