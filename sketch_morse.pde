import processing.serial.*;
int runOnce = 0;
Serial myPort;
//TODO: Use temboo librabry to connect to APIs. Here is a twitter example https://temboo.com/processing/display-tweet

void setup() {
  String portname = Serial.list()[4]; // User println(Serial.list()) to see which port you should use
  myPort = new Serial(this, portname, 9600);
}

void draw() {
    //idea is to run terminal command here.
    // Could also use the twitter library.
  
  String tweet = "";
  tweet += "!";
  myPort.write(tweet); //TODO: Figure out why this does not run immediately. Test for fault at Arduino site.
  delay(1000);
}
