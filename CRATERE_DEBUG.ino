void setup() {
  // put your setup code here, to run once:
  pinMode(5, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(5));
  delay(100);
}
