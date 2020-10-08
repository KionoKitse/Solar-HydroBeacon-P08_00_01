/*
   P08_01_00-ANA608VarResist
   Project: P08_01_00 Solar HydroBeacon
   Schematic: P08_01_00-ANA608VarResist.fzz
   Description: Reading capacitor voltage
*/
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(analogRead(A4));
  delay(100);
}
