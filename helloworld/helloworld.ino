/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, world!");
  int x = 7;
  Serial.print("X = ");
  Serial.println(x);
}

void loop() {
  delay(100);
  int time = millis();
  Serial.print("Total time since beginning of execution = ");
  Serial.println(time);
}
