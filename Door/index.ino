void index() //runs when newData == true
{
  delay(10);
  newData = false; //Set the data in the index char to be overwrittin
  delay(100);
  // Serial.print("Received Command: "); //Depreciated
  //Serial.println(imput); //Depreciated

  //commands
  //operation a
  if (imput == "a") //if the imput is a
  {
    //Serial.println("exc operation1"); //Depreciated
    operation1(0);
    
    if (OPERATION1COMPLETE == true)
    {
      //Serial.println("Operation complete"); //Depreciated
    }
    else
    {
      // Serial.println("Operation not completed!"); //Depreciated
    }
    OPERATION1COMPLETE = false;
  }

  //End Index
    if ((imput == "a") || (imput == "b") || (imput == "c")) 
    { //Secondary index to display the error message below
      delay(2);
    }
    else
    {
      imput = "";
      //Serial.println("That is not a command or it has not been added to my index yet."); //Depreciated
    }
    imput = ""; //clear the imput
}
