#include "wifi.h"
#include "mqtt.h"
#include "sensorDht22.h"
#include "sensorFire.h"
//#include "sensorMotion.h"
#include "button.h"

void setup() {
  // put your setup code here, to run once:
  //setup_button();
  //setup_fire();
 // setup_motion();
  Serial.begin(115200);
  setupWiFiMulti();
  setup_mqtt();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  loop_mqtt();
  //loop_button();
  loop_dht22();
  //loop_fire();
  //loop_motion();
}
