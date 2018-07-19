void setup() {
 LED_BUILTIN(7, OUTPUT);

}

void loop() {
  LED_BUILTIN(7, HIGH);
  delay(500);
  LED_BUILTIN(7, LOW);
  delay(500);

}
