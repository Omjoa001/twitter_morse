import processing.serial.*;
int runOnce = 0;
Serial myPort;

void setup() {
  String portname = Serial.list()[4]; // User println(Serial.list()) to see which port you should use
  myPort = new Serial(this, portname, 9600);
}

void draw() {
  String tweet = "e";
  tweet += "!";
  myPort.write(tweet); //TODO: Figure out why this does not run immediately. Test for fault at Arduino site.
  delay(1000);
}
