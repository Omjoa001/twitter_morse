import processing.serial.*;
import java.util.*;
import twitter4j.conf.*;
import twitter4j.*;
import twitter4j.auth.*;
import twitter4j.api.*;
import java.util.*;

Twitter twitter;
Serial myPort;

String currentTweet = "hh"; //Initial ID 

void setup()
{
    size(800,600);
    
    String portname = Serial.list()[4]; // User println(Serial.list()) to see which port you should use
    myPort = new Serial(this, portname, 9600);
}

void draw()
{
   try {
     currentTweet += "!";
     myPort.write(currentTweet);
     delay(1000);
   } catch (Exception e) {
     delay(250);
     System.out.println("Failed to contact twitter. Error:" + e);
  } finally {
     //getNewTweets();  // Need elevated access in twitter developer account. Otherwise will not run.
  }
}

void getNewTweets()
{
  ConfigurationBuilder cb = new ConfigurationBuilder();
    cb.setOAuthConsumerKey("***");
    cb.setOAuthConsumerSecret("***");
    cb.setOAuthAccessToken("***");
    cb.setOAuthAccessTokenSecret("***");

    TwitterFactory tf = new TwitterFactory(cb.build()); //Make instance authenticated with the above keys.

    twitter = tf.getInstance();
    
    try
    {
       ResponseList<Status> userTimeLine = twitter.getUserTimeline();
       //Split off first line.
       currentTweet = userTimeLine.get(0).getText();   
    }
    catch (TwitterException te)
    {
        System.out.println("Failed to search tweet: " + te.getMessage());
        System.exit(-1);
    }
}
