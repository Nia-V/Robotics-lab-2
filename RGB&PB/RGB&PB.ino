/*
Turns led rbg on (White) And on Using a Pushbutton
(If, INPUT PULLUP, pinMode, digital output, digital input)

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
digitalWrite(8, 1); // Then Turn on all leds to make white
  digitalWrite(9, 1);
  digitalWrite(10, 1);
}
if( digitalRead(11)== 0){//If PB is on
digitalWrite(8, 0);
  digitalWrite(9, 0);//Then Turn off all leds to make black
  digitalWrite(10, 0);
}

}