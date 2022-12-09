void setup() {
  // put your setup code here, to run once:
pinMode(2,1);
pinMode(5,1);
pinMode(6,1);
pinMode(9,1);
pinMode(10,1);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,1);

analogWrite(5,25);
digitalWrite(6,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(5000);

digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,25);
analogWrite(10,0);
delay(5000);

analogWrite(5,0);
analogWrite(6,250);
analogWrite(9,0);
analogWrite(10,0);
delay(5000);

analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,250);
delay(5000);
}
