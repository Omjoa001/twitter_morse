// Thanks for manual labour from https://create.arduino.cc/projecthub/VulcanianArduino/arduino-morse-code-transmitter-7fdba9
//TODO: replace short and long delays with short() and long() function for readability
//TODO: Use twitter API https://github.com/witnessmenow/arduino-twitter-api
int unit = 100;
int letterdelaytime = unit*3;
int worddelaytime = unit*7;
int beep = 9; // connect buzzer
char val[3] = ""; //this is where you write what the arduino will say in morse. Remember correct array size

//TODO: Base program now running. All that remains is to communicate with twitter
// Start here: https://forum.arduino.cc/t/arduino-twitter-without-ethernet-shield/61386

bool runOnce = true;

void setup() {
    Serial.begin(9600);
    pinMode(beep, OUTPUT);
}

void loop() {

  if(Serial.available() > 0) {
   String str = Serial.readString(); // read it and store it in val
   str.toCharArray(val,281); // toCharArray(buffer to copy the characters into, the size of the buffer). 
   
   if (runOnce) {
    runOnce = false; //change to false to only run once and avoid going crazy 
   
  
    for (int i = 0; i < sizeof(val); i = i + 1) {
      //conver character to int for use in switch statement
      int x = val[i];
        //TODO: Figure out why it defaults
        //hint: check what x is, and how case is interpreted.
       switch (x) {
            case char(32):
                delay(worddelaytime);
                break;
            case 'a':
                a();      
                break;
            case 'b':
                b();
                break;
            case 'c':
                c();
                break;
            case 'd':
                d();
                break;
            case 'e':
                e();
                break;
            case 'f':
                f();
                break;
            case 'g':
                g();
                break;     
            case 'h':
                h();
                break;
            case 'i':
                _i_(); //avoiding i() since it's a keyword
                break;
            case 'j':
                j();
                break;
            case 'k': case '\0': // Take into account end of string '\0', here letter 'k' represents end of transmission
                //k();
                break;
            case 'l':
                l();
                break;
            case 'm':
                m();
                break;
            case 'n':
                n();
                break;
            case 'o':
                o();
                break;
            case 'p':
                p();
                break;  
            case 'q':
                q();
                break;
            case 'r':
                r();
                break;
            case 's':
                s();
                break;
            case 't':
                t();
                break;
            case 'u':
                u();
                break;  
            case 'v':
                v();
                break;
            case 'w':
                w();
                break;
            case 'x':
                _x_(); //avoiding x() since it's a keyword
                break;
            case 'y':
                y();
                break;
            case 'z':
                z();
                break;
         
            case '0':
                ZERO();
                break;
            case '1':
                ONE();
                break;
            case '2':
                TWO();
                break;
            case '3':
                THREE();
                break;
            case '4':
                FOUR();
                break;
            case '5':
                FIVE();
                break;
            case '6':
                SIX();
                break;  
            case '7':
                SEVEN();
                break;
            case '8':
                EIGHT();
                break;
            case '9':
                NINE();
                break;
           default:
            ZERO();
            break;
        };
      }
    
      delay(letterdelaytime);
      delay(100000);
    }
  }
}//loop

void getLett(int x) {
      
  }  

void dot() {
    tone(beep,440);
    delay(unit);
  }

void dash() {
    tone(beep,440);
    delay(unit*3);
  }

void pause() {
    noTone(beep);
    delay(unit);
  }

void a() {
     dot();;
     pause();;
     dash();;     
     pause();;
}//morseA

void b() {
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseB

void c() {
     dash();
     pause();
     dot();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseC

void d() {     
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseD

void e() {
     dot();
     pause();
}//morseE

void f() {
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseF

void g() {
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseG

void h() {
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseH

void _i_() {
     dot();
     pause();
     dot();
     pause();
}//morseL

void j() {
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseJ

void k() {
     dash();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseK

void l() {
     dot();
     pause();
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseL

void m() {
     dash();
     pause();
     dash();
     pause();
}//morseM
void n() {
     dash();
     pause();
     dot();
     pause();
}//morseN

void o() {
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseO

void p() {
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseP

void q() {
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseQ

void r() {
     dot();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseR

void s() {
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseS

void t() {
     dash();
     pause();
}//morseT

void u() {
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseU

void v() {
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseV

void w() {
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseW

void _x_() {
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseX

void y() {
     dash();
     pause();
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseY

void z() {
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseZ

void ZERO(){
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseZERO

void ONE(){
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseONE

void TWO(){
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseTWO

void THREE(){
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
     dash();
     pause();
}//morseTHREE

void FOUR(){
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dash();
     pause();
}//morseFOUR

void FIVE(){
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseFIVE

void SIX(){
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseSIX

void SEVEN(){
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseSEVEN

void EIGHT(){
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
     dot();
     pause();
}//morseEIGHT

void NINE(){
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dash();
     pause();
     dot();
     pause();
}//morseNINE
