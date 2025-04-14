char ReceivedInput;
const int led = LED_BUILTIN;

void setup() {
  Serial.begin(9600);
  digitalWrite(led, LOW);
}

void loop() {
  if(Serial.available()){
    ReceivedInput = Serial.read();
    Serial.print("Raw Input: ");
    Serial.println(ReceivedInput);
    if (ReceivedInput == 'a' || ReceivedInput == 'A'){
      Serial.println("Like podunga!!");
    }
    else if (ReceivedInput == 'b' || ReceivedInput == 'B'){
      Serial.println("Subscribe Panunga ");
    }
    delay(1000);    
  }
}
