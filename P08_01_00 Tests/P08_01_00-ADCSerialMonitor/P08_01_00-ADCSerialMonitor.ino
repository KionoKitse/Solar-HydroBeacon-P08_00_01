/*
   P08_01_00-ADCSerialMonitor
   Project: P08_01_00 Solar HydroBeacon
   Schematic: 
   Description: Read VCC from ADC value and post via serial monitor
  
   Credits
   * Reading ADC
     https://hackaday.io/project/164682-a-cheap-and-dangerous-garden-light-boost-converter/details
   * Software serial tutorial
     https://www.marcelpost.com/wiki/index.php/ATtiny85_ADC
*/

//Serial printing on the ATtiny85
#include <SoftwareSerial.h>
#define RX    3   //Pin 3 -> Green
#define TX    4   //Pin 4 -> White
SoftwareSerial Serial(RX, TX);

//Variables
int16_t ADC_Value;

// ADC ISR triggers after conversion.
ISR( ADC_vect )
{
  int16_t v;
  v = ADCL;
  v |= (ADCH << 8);
  ADC_Value = v;
}

// configures ADC for reading battery supply voltage
void ADC_autostart(void)
{
  // see table 17-3, Vcc as Voltage Reference, read Vbg
  ADMUX =
    (0 << ADLAR) |     // 1=left shift result for 8-bit, 0=10-bit
    (0 << REFS2) |     // Sets ref. bit 2
    (0 << REFS1) |     // Sets ref. bit 1
    (0 << REFS0) |     // Sets ref. bit 0
    (1 << MUX3)  |     // MUX bit 3  see table 17-4 for mux sel
    (1 << MUX2)  |     // MUX bit 2
    (0 << MUX1)  |     // MUX bit 1
    (0 << MUX0);       // MUX bit 0

  //ISR on, freerun auto-trigger, 128 prescaler, about 630sps @ 1mHz clock
  ADCSRA =
    (1 << ADIE)  |    //ISR en
    (1 << ADATE) |    //autotrigger
    (1 << ADEN)  |    // Enable ADC
    (1 << ADPS2) |    // prescaler bit 2
    (1 << ADPS1) |    // prescaler bit 1
    (1 << ADPS0);     // prescaler bit 0

  ADCSRB = 0;   //free run

  ADCSRA |= (1 << ADSC);          // start ADC, should trigger ISR
}



void setup() {
  Serial.begin(9600);
  ADC_autostart();  //Start ADC feedback loop
  Serial.println("");
}



void loop()
{
  Serial.println(ADC_Value);
}
