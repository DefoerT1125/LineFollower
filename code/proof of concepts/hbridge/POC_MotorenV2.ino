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

digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(9,1);
digitalWrite(10,0);
delay(5000);

digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(5000);

analogWrite(5,128);
analogWrite(6,0);
analogWrite(9,128);
analogWrite(10,0);
delay(5000);

analogWrite(5,0);
analogWrite(6,128);
analogWrite(9,0);
analogWrite(10,128);
delay(5000);
}
