/**********************************************************************
 Arduino basic serial read analog input with LabVIEW
 How to read analog input with Arduino board and communicate data via 
 serial to your PC using labVIEW
 author  Physics Light
 date    03 December 2014
 license Creative Commons 4.0 share alike 
************************************************************************/

void setup(){
 // init serial baudrate 
 Serial.begin(9600); 
}

void loop(){
  // read data analog pin A0
  int data = analogRead(0);
  // write data to serial port
  Serial.println(data);
  // take a coffee
  delay (250);
}
