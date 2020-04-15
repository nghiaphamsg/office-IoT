int pinButton = 4;

void setup_button() {
  pinMode(pinButton,INPUT);
}

void loop_button(){
  if (digitalRead(pinButton) == HIGH){
      digitalWrite(fan, HIGH);
      //pubSubClient.publish("fanStatus","on");
  }
  if (digitalRead(pinButton) == LOW){
      digitalWrite(fan, LOW);
      //pubSubClient.publish("fanStatus","off");
  }
}

