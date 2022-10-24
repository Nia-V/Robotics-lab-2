/*
LED Voltage Reader

 Reads the value of a potentiometer and Turns on leds based on the value.

(if, Analog Write, Floats)
  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  
}
 float volts = 0  ; //storage variable for votls
float bits=0; ////storage variable for bits
// the loop function runs over and over again forever
void loop() {
volts = analogRead (A0)*(5.00/1023.00); //Reads and stores the potentiometer value after converting it to volts
bits = volts * 51;// reads and stores the potentiometer value converting from volts to 8-bit.

if (volts <= 1) {//if Vooltage of potentiometer is greater than 1 volts
  analogWrite(9, bits); //wwrite the bit value to the red rgb

}

if (volts <= 2.5) {//if Vooltage of potentiometer is greater than 3 volts
   analogWrite(10, bits);//write the bit value to the green rgb
}

if (volts <= 5) {//if Vooltage of potentiometer is greater than 4 volts
   analogWrite(11, bits);//wwrite the bit value to the blue rgb
}

}