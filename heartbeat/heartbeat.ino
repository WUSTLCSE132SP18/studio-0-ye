void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("HI");
}

void loop() {
  // put your main code here, to run repeatedly:
  int time = millis();
  Serial.print(time);
  Serial.println("sec have elapsed");
  Serial.println("hi");
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
