void setup() 
{
 pinMode(LED_BUILTIN, OUTPUT); //Change the mode of the builtin light (or pin) to an output
}

void loop() 
{
  digitalWrite(LED_BUILTIN, HIGH); //Set the output of the lamp to High
  delay(500); //Wait 500ms
  digitalWrite(LED_BUILTIN, LOW); //Set the output of the lamp to Low
  delay(500); //Wait another 500ms
}
