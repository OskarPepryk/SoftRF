void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  Serial.begin(38400);
  Serial.println("ESP32test"); //Bluetooth device name

}

void loop() {
  // put your main code here, to run repeatedly:
   if (Serial.available()) {
    Serial1.write(Serial.read());
  }
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }

}
