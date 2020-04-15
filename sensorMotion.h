// Global variables
int pirPin = 13;    //Motion

void setup_motion(){
   pinMode(pirPin, INPUT);
}

void loop_motion(){
  if(digitalRead(pirPin) == HIGH){   
     Serial.println("-----");
     Serial.println("Motion Detected");
     Serial.println("-----");
     pubSubClient.publish("Notification Danger", "Detecting strangers entering your office. Check your office camera now!!!!");  
     delay(5000);
  }    
}

