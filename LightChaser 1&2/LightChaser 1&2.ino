/*
blinks leds in sequence
(pinMode, delay)
*/


void setup() {
  // put your setup code here, to run once:
 pinMode(8, OUTPUT); // pins 8, 9 ,10 , 11 are digital outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8, HIGH); // led 1 turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW); // led 1 turns off
  digitalWrite(9, HIGH); // led 2 turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW); //led 2 turns off
   digitalWrite(10, HIGH); //led 3 turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);//led 3 turns off
  digitalWrite(11, HIGH); //led 4 turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);//led 4 turns off
  
}
  