/*
   P08_01_00-ANA608VarResist
   Project: P08_01_00 Solar HydroBeacon
   Schematic: P08_01_00-ANA608VarResist.fzz
   Description: Reading capacitor voltage
*/
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int Voltage = analogRead(A4);
  Serial.println(Voltage);
  if(Voltage>400)
  {
    digitalWrite(9,HIGH);
    //delay(1);
    digitalWrite(9,LOW);
  }
}
