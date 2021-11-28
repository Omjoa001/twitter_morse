// Thanks for manual labour from https://create.arduino.cc/projecthub/VulcanianArduino/arduino-morse-code-transmitter-7fdba9

int delaytime = 100;
int letterdelaytime = 300;
int worddelaytime = 700;
int beep = 9; 

void setup() {
     pinMode(beep, OUTPUT);
     int letter = 100;
}
void loop() {
//this is where you write what the arduino will say in morse.
//write worddelaytime if you are doing another word.
/*a();
delay(letterdelaytime);
r();
delay(letterdelaytime);
a();
delay(letterdelaytime);
//l();
//delay(letterdelaytime);
//o();*/

delay(letterdelaytime);
delay(100000);
}//loop

void transmit() {

  
    tone(beep,440);
        delay(100);
        noTone(beep);
        delay(getLett());
        tone(beep,440);
        delay(300);
        noTone(beep);
        delay(100);
}

int getLett() {
    return 100;
  }
/*void transmit(char::letter) {
switch(letter) {
      case 'a' :
        tone(beep,440);
        delay(100);
        noTone(beep);
        delay(100);
        tone(beep,440);
        delay(300);
        noTone(beep);
        delay(100);
        break;
      case 'b':
        tone(beep,440);
        delay(300);
        noTone(beep);
        delay(100);
        tone(beep,440);
        delay(100);
        noTone(beep);
        delay(100);
        tone(beep,440);
        delay(100);
        noTone(beep);
        delay(100);
        tone(beep,440);
        delay(100);
        noTone(beep);
        delay(100);
        break;
        *\/
        
      default:
    }
}*/

void a() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseA

void b() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseB

void c() {
     tone(beep,440);
     delay(300);

     noTone(beep);
     delay(100);
     
     tone(beep,440);
     delay(100);
     
     noTone(beep);
     delay(100);
     
     tone(beep,440);
     delay(300);
     
     noTone(beep);
     delay(100);
     
     tone(beep,440);
     delay(100);
     
     noTone(beep);
     delay(100);
}//morseC

void d() {     
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseD

void e() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseE

void f() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseF

void g() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseG

void h() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseH

void i() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseL

void j() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseJ

void k() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseK

void l() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseL

void m() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseM
void n() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseN

void o() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseO

void p() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseP

void q() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseQ

void r() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseR

void s() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseS

void t() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseT

void u() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseU

void v() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseV

void w() {
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseW

void x() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseX

void y() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseY

void z() {
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseZ

void ZERO(){
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseZERO

void ONE(){
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseONE

void TWO(){
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseTWO

void THREE(){
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseTHREE

void FOUR(){
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
}//morseFOUR

void FIVE(){
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseFIVE

void SIX(){
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseSIX

void SEVEN(){
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseSEVEN

void EIGHT(){
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseEIGHT

void NINE(){
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(300);
     noTone(beep);
     delay(100);
     tone(beep,440);
     delay(100);
     noTone(beep);
     delay(100);
}//morseNINE
