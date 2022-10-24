/*
Turns led rbg on magenta and fades to white using potentiometer.
(Analog input and output, INT variables)

*/
int Ten_Bit = 0; //stores 10-bit value
float Out_Bits = 0; //Stores 8 bit value
void setup() {
  // put your setup code here, to run once:
 

}
void loop() { // loops code forever
analogWrite(9, 255);//turns red led on fully
analogWrite(10, 255);//turns blue led on fully
Ten_Bit = analogRead(A0); //Reads potentiometer voltage and stores in Ten bit
Out_Bits = (Ten_Bit)*(225.00/1023.00);// Converts 10 bit read value to 8 bit
analogWrite(11, Out_Bits);//writes 8 bit potentiometer value to green led


}