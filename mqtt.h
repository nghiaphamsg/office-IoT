#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// Global variables
int fan = 16;       //Fan
int light = 4;      //Light

const char* mqtt_server = "*********";
#define MQTT_PORT                     ****
#define MQTT_USERNAME                 "********"
#define MQTT_PASSWORD                 "********"

WiFiClient wifiClient;
PubSubClient pubSubClient(wifiClient);

void callback(String topic, byte* message, unsigned int length) {
 
  Serial.print("Message arrived in topic: ");
  Serial.println(topic);
  Serial.println("Message:");
  String messageTemp;
  
  for (int i = 0; i < length; i++) {
    Serial.print((char)message[i]);
    messageTemp += (char)message[i];
  }
  Serial.println();
  if(topic == "light"){
    if(messageTemp == "on"){
        digitalWrite(light, HIGH);
      }
    if(messageTemp == "off"){
        digitalWrite(light, LOW);
      }
    }
  if(topic == "fan"){
      if(messageTemp == "on"){
          digitalWrite(fan, HIGH);
        }
      if(messageTemp == "off"){
          digitalWrite(fan, LOW);
        }
    }
  Serial.println("-----------------------");
}

void setup_mqtt(){
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pubSubClient.setServer(mqtt_server, MQTT_PORT);
  pubSubClient.setCallback(callback);
}

void loop_mqtt()
{
  // Loop until we're reconnected
  if (pubSubClient.connected()) {
      pubSubClient.loop();
      return;
  }

  Serial.print("Attempting MQTT connection...");
  
  // Attempt to connect
  char mqttClientId[20];
  sprintf (mqttClientId, "LIV-%06X", ESP.getChipId());
  if (pubSubClient.connect(mqttClientId, MQTT_USERNAME, MQTT_PASSWORD)) {
    Serial.println("MQTT Connected");
    pubSubClient.subscribe("light");
    pubSubClient.subscribe("fan");
  } 
  
  Serial.print("failed, rc=");
  Serial.print(pubSubClient.state());
  
  // Wait 2 seconds before retrying
  Serial.println(" try again in 2 seconds");
  delay(2000);
}


