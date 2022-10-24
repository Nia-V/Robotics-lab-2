/*
Turns led rbg on Yellow And on Magenta Using a Pushbutton
(If, INPUT PULLUP, pinMode, digital output)

*/

void setup() {
  // put your setup code here, to run once:
 pinMode(8, OUTPUT); // pins 8, 9 ,10 are digital outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
     pinMode(11, INPUT_PULLUP);// pin 11 is an input

}
void loop() { // loops code forever
if( digitalRead(11)== 1){//If PB is off
digitalWrite(8, 1); // Then Turn on red & green leds to make yellow
  digitalWrite(9, 0);
  digitalWrite(10, 1);
}
if( digitalRead(11)== 0){//If PB is on
digitalWrite(8, 1);
  digitalWrite(9, 1);//Then Turn on Red and blue leds to make magenta
  digitalWrite(10, 0);
}

}