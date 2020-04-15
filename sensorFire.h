
// Global variables
int warnPin = 12;     //Speaker
int flame_din= 0;    //Fire 

void setup_fire() {
   pinMode(flame_din,INPUT);             
   pinMode(warnPin,OUTPUT);
}

void loop_fire(){
   if(digitalRead(flame_din)==LOW){
      pubSubClient.publish("Fire", "Notification Danger!!! There is fire in your office, check it out"); 
      Serial.println("-----");
      Serial.println("Fire Fire Fire!!!");
      Serial.println("-----");
      for(int i=0; i<10 ; i++){
        digitalWrite(warnPin,HIGH);
        delay(200);
        digitalWrite(warnPin,LOW);
        delay(200);
      }
   }
   else{
    digitalWrite(warnPin,LOW);                                                  
   }
}

