/*
LED Voltage Reader

 Reads the value of a potentiometer and Turns on leds based on the value.
(If AnalogRead Digital Write)

  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(1,OUTPUT);// pins 1,2,3,4,5 are all outputs
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
 float volts = 0;//stores volts value
float bits=0;// stores bit value
// the loop function runs over and over again forever
void loop() {
volts = analogRead (A0)*(5/1023); //Reads and stores the potentiometer value after converting it to volts
bits = volts * 51;// reads and stores the potentiometer value converting from volts to 8-bit.
if (volts <= 1) {//if Vooltage of potentiometer is less than 1 volts
 digitalWrite(1,1);// 1 led is on if voltage is less than 1, the rest of the leds are off
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);

}

if (volts <= 2) {//if Vooltage of potentiometer is less than 2 volts
   digitalWrite(1,1);// 2 leds are on if voltage is less than 2, the rest of the leds are off
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
}

if (volts <= 3) {//if Vooltage of potentiometer is less than 3 volts
   digitalWrite(1,1);// 3 leds are on if voltage is less than 3, the rest of the leds are off
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
}
if (volts <= 3) {//if Vooltage of potentiometer is less than 4 volts
   digitalWrite(1,1);// 4 leds are on if voltage is less than 4, the rest of the leds are off
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
if (volts <= 5) {//if Vooltage of potentiometer is less than 5 volts
   digitalWrite(1,1);// 5 leds are on if voltage is less than 5
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
}
}