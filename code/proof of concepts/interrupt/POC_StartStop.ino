int startStop = 7;
int led = 13;

bool Status = false;

void setup() {
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(startStop, INPUT);  

  attachInterrupt(digitalPinToInterrupt(startStop), Interrupt, RISING);
}

void loop() {
  // Blauwe led aan of uit
  digitalWrite(led, Status);
}

void Interrupt() {
  Serial.println("Interrupt");
  Status = !Status;
}
