/*
Turns on and off a motor using a relay and pin 8
(Relay, pinMode, Delay, digital output)

*/



void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);// pin 8 is an output
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (8, 1); // energize coil
 delay(10000);        // Wiat 10 sec
 digitalWrite (8, 0); // de-energize coil
}
