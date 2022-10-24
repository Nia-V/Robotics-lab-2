/*
blink
  This program blinks an led connected to pin 8 of the Arduino 
  (Digital Output, delay,pinMode)
*/

void setup()
{
  pinMode(8, OUTPUT); //pin 8 is a digital output pin
}

void loop()//Loops forever
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}