import processing.serial.*;
import java.util.*;
// Note: In case of issues with import twitter4j, delete the preferences file and restart
import twitter4j.*; 
import twitter4j.util.*;
import twitter4j.util.function.*;
import twitter4j.auth.*;
import twitter4j.management.*;
import twitter4j.json.*;
import twitter4j.api.*;
import twitter4j.conf.*;
// Alternatively use temboo library to connect to APIs. Here is a twitter example https://temboo.com/processing/display-tweet
Twitter twitter;

int runOnce = 0;
Serial myPort;


/*407.conf.*;
import twitter4j407.*;
import twitter4j407.auth.*;
import twitter4j407.api.*;
*/
//TODO: 
// Forget the above. Using twitter 4j, here: http://www.codasign.com/tutorials/processing-and-twitter/processing-and-twitter-getting-started/

void setup() {
  ConfigurationBuilder cb = new ConfigurationBuilder();
  cb.setOAuthConsumerKey("****");
  cb.setOAuthConsumerSecret("****");
  cb.setOAuthAccessToken("****");
  cb.setOAuthAccessTokenSecret("****");
  
  TwitterFactory tf = new TwitterFactory(cb.build());
  twitter = tf.getInstance();
  
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
