void serialEvent() {
  while (Serial.available()) //When you get a command
  {
    char inChar = (char)Serial.read(); // get the new byte
    imput += inChar;// add it to the imput
    delay(10);
  }
  newData = true;
}
