boolean OPERATION1COMPLETE = false; //The return state of the Operation

boolean newData = false; //becomes true only as long as there is unindexed information
String imput = ""; //populated with the current command not yet run

void setup() //Runs once
{
Serial.begin(57600); //start serial port
  delay(10); //Delay for 10ms
  imput.reserve(200); // reserve 200 bytes for the imput
}

void loop()  //runs over and over
{
  if(newData == true) //If serial data has come in
  {
    index(); //read from the index
  }
}
