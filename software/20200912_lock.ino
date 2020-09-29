String cmd;

void setup() {
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(7,HIGH);
  delay(500);
  
  if(Serial.available()){
    cmd = Serial.readStringUntil('\n');
    if(cmd == "ON")
      for(int counter = 0 ; counter<5;counter++){
        digitalWrite(7,LOW);
        delay(2000); 
        }
  }

}
