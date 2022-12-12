char data = 0;

void setup() {
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available() > 0){
    data = Serial1.read();
    Serial.print(data);
  }
}
