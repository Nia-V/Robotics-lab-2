/*
Input Pull up

 Reads the value of a pushbuttoin connected to pin 8

(Serial monitor, digital read)

  
*/

// the setup function runs once when you press reset or power the board
void setup() {

Serial.begin(9600); //begins serial monitor and sets bit rate.

  pinMode(8, INPUT_PULLUP);  // initialize digital pin 8 as an output.
}
   

// the loop function runs over and over again forever
void loop() {
  Serial.println (digitalRead(8));//Prints PB value to monitor
}