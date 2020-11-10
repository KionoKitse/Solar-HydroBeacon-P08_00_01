/*
   P08_01_00-Main
   Project: P08_01_00 Solar HydroBeacon
   Schematic: 
   Description: Read VCC input and control ANA608 on/off sate
  
   Credits
   * Reading ADC
     https://hackaday.io/project/164682-a-cheap-and-dangerous-garden-light-boost-converter/details
   * Software serial tutorial
     https://www.marcelpost.com/wiki/index.php/ATtiny85_ADC
*/

//Variables
byte Red = 0;
byte Green = 1;
byte SensorPwr = 2;
byte RefPin = A2;
byte SoilPin = A3;
int RefVal;
int SoilVal;
/*
#include <SoftwareSerial.h>
#define RX    0   //Pin 3 -> Green
#define TX    1   //Pin 4 -> White
SoftwareSerial Serial(RX, TX);
*/

void setup() {
  pinMode(Green, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(SensorPwr, OUTPUT);
  pinMode(RefPin, INPUT);
  pinMode(SoilPin, INPUT);
  //Serial.begin(9600);
}



void loop()
{
  digitalWrite(SensorPwr,HIGH);
  delay(500);
  RefVal = analogRead(RefPin);
  SoilVal = analogRead(SoilPin);
  digitalWrite(SensorPwr,LOW);
  /*
  Serial.print(SoilVal);
  Serial.print(",");
  Serial.println(RefVal);
  delay(2000);
  */
  
  if(SoilVal > RefVal){
    BlinkGreen();
    //Serial.println("Green");
  }
  else{
    BlinkRed();
    //Serial.println("Red");
  }
  delay(10000);
  
}

void BlinkRed(){
  for(int i=0; i<5; i++)
  {
    digitalWrite(Red,HIGH);
    delay(100);
    digitalWrite(Red,LOW);
    delay(200);
    digitalWrite(Red,HIGH);
    delay(100);
    digitalWrite(Red,LOW);
    delay(1000);
  }
}
void BlinkGreen(){
  for(int i=0; i<5; i++)
  {
    digitalWrite(Green,HIGH);
    delay(100);
    digitalWrite(Green,LOW);
    delay(200);
    digitalWrite(Green,HIGH);
    delay(100);
    digitalWrite(Green,LOW);
    delay(1000);
  }
}
