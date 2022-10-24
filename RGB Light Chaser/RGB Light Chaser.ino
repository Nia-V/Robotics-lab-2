/*
Turns led red , blue, green then white
(pinMode, delay, digital output)

*/

void setup() {
  // put your setup code here, to run once:
 pinMode(8, OUTPUT); // pins 8, 9 ,10 are digital outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
    

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8, HIGH); // led red turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW); // led red turns off
  digitalWrite(9, HIGH); // led blue turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW); //led blue turns off
   digitalWrite(10, HIGH); //led green turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);//led blue turns on
  digitalWrite(8, HIGH); //led red turns on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);//led Red, green, blue turn off
  digitalWrite(9, LOW);
   digitalWrite(10, LOW);
  
}