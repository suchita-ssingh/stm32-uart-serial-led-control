void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Type 'ON' to turn on the LED and 'OFF' to turn it off");
}
void loop(){
  if(Serial.available()> 0 ){
    String command = Serial.readString();

    if (command == "ON\n"){
      digitalWrite(13, HIGH);
      Serial.println("led is now on");
    }
    else if (command == "OFF\n"){
      digitalWrite(13, LOW);
      Serial.println("LED is now off");
    }
    else{
      Serial.println("Invalid command type 'ON' or 'OFF' ");
    }
  }
  
}