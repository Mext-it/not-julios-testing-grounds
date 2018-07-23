
boolean OPERATION1COMPLETE = false;

boolean newData = false; //becomes true only as long as there is unindexed information
String imput = ""; //populated with the current command not yet run

void setup() 
{
Serial.begin(57600); //start serial port
  delay(10);
  imput.reserve(200); // reserve 200 bytes for the imput
}

void loop() 
{
  if(newData == true)
  {
    index();
  }
}
