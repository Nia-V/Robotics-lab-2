/*
Pullup and Pull down

 Reads the value of a pushbuttoin connected to pin 8


 
(pull Up, Pull Down, Serial monitor, digital read)
  
*/

// the setup function runs once when you press reset or power the board
void setup() {

Serial.begin(9600); //begins serial monitor and sets bit rate.

  pinMode(8, INPUT);  // initialize digital pin 8 as an output.
}
   

// the loop function runs over and over again forever
void loop() {
  Serial.println (digitalRead(8));//Prints PB Value to monitor