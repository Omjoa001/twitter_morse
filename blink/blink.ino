// Thanks for manual labour from https://create.arduino.cc/projecthub/VulcanianArduino/arduino-morse-code-transmitter-7fdba9
//TODO: replace short and long delays with short() and long() function for readability
//TODO: Use twitter API https://github.com/witnessmenow/arduino-twitter-api
int unit = 100;
int letterdelaytime = unit*3;
int worddelaytime = unit*7;
int beep = 9; // connect buzzer
char arr[2] = "h";

void setup() {
     pinMode(beep, OUTPUT);
     
     //string st = "hello";
     //the c_str() function returns a const pointer
     //to null terminated contents.
     //const char *str = st.c_str();
}

void loop() {
//this is where you write what the arduino will say in morse.
//write worddelaytime if you are doing another word.
//a();

//h();

for (int i = 0; i < sizeof(arr); i = i + 1) {
  //conver character to int for use in switch statement
  int x = arr[i] - '0';
  
    switch (x) {
      case 'h':
        h();
        break;
      case 'e':
        e();
        break;
      case 'l':
        l();
        break;
      case 'o':
        o();
        break;
      default:
        a();
        break;
    };
}

delay(letterdelaytime);
delay(100000);
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

void i() {
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

void x() {
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
