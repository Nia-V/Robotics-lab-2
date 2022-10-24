/*
    displays the bit and voltage values of a potentiometer on the serial monitor

 (Math, analog read, serial monitor)
*/

int Sensor_Value = 0; //create storage variable for sensor 
int Voltage = 0;//create storage variable for voltage

void setup()
{
Serial.begin(9600);//begins monitor and sets bit rate
}

void loop()//loops forever
{
  
   Sensor_Value = analogRead(A0);// read and store the value from the Potentiometer
 Serial.println  (Sensor_Value); //Print the stored value to the monitor
Voltage = (Sensor_Value)*(255/1023);// calculates voltage value of potentiometer
 Serial.println  (Voltage); //Print the stored value to the monitor

}