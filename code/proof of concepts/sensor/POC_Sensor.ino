

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val0 = analogRead(A0);
  int val1 = analogRead(A1);
  int val2 = analogRead(A2);
  int val3 = analogRead(A3);
  int val4 = analogRead(A4);
  int val5 = analogRead(A5);
  const int waardes [6] = {val0, val1, val2, val3, val4, val5};
  for (int i=0; i<6; i++){
    Serial.println(waardes[i]);
  }
  delay(1000);
}
