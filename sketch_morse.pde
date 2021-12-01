import processing.serial.*;
int runOnce = 0;
Serial myPort;

void setup() {
  String portname = Serial.list()[4]; // User println(Serial.list()) to see which port you should use
  myPort = new Serial(this, portname, 9600);
}

void draw() {
  String tweet = "ee";
  myPort.write(tweet);
}
