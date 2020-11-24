### Description  
P08_01_00 Solar HydroBeacon
A solar powered soil moisture sensor project.
 * Solar powered
 * LED indicates soil moisture low or acceptable
 * Low to no maintenance
 * Capacitor as power source
 * Analog components 
 * Low cost
 * Interesting and elegant design
 * Small size
### Notes to user
 * Project documented at https://kionokitse.wordpress.com/solar-hydrobeacon/
 * In development
### What's next
 * Determine typical soil moisture levels
 * Determine trimpot value that would be the best for the typical soil moistures
 * Find voltage supervisors that would work
 * Order solar panels
 * Test led drivers
### Notebook
 * Online circuit simulator [link](http://falstad.com/circuit/)
 * Case design options
	* Case option: [Neko Submarine](https://www.thingiverse.com/thing:3081218) 
	* Case option: [cute caterpillar](https://www.thingiverse.com/thing:3598906)
	* Case option: [Pom Pom Purin keychain](https://www.thingiverse.com/thing:1188272)
 * Voltage detector 
	* Trimpot should be about 50% less than sensor resistance
	* Voltage divider total resistance should be high to limit current flow
	* On build I need to re-tune the circuit
	* Added a 500Ohm resistor to cut down on the wasted current to turn on the green led
 * Solar LED driver
	* Good intro to the solar LED driver featuring the YX8018 IC [Link](https://ez.analog.com/adieducation/university-program/b/blogs/posts/hacking-an-led-solar-garden-light)
	* Solar powered soil moisture sensor project [Link](https://learn.sparkfun.com/tutorials/soil-moisture-sensing-by-hacking-a-solar-light/all)
	* When the CE pin on ANA608 is high the LED will turn ON
	* When the CE pin on ANA608 is low the LED will trun OFF
 * Blink circuit [Link](http://tinyurl.com/y29udzjd)
	* Need to tune the circuit for low voltage operation
	* Increasing the green capacitor size will increase the time that the green capacitor is on
	* Reducing the resistance before the red LED will increase the red led brightness
	* Latest progress on this [Link](http://tinyurl.com/y2kkg7hm)
 * Simulate Solar engines
	* [The Zener-based solar engine](http://solarbotics.net/library/circuits/se_t1_zener.html) [Simulation](https://tinyurl.com/y29gntqv) (not working yet)
	* [FLED-based solar engines](http://solarbotics.net/library/circuits/se_t1_fled.html) [Simulation](https://tinyurl.com/y26xv6wr) (not working yet)
 * Simple blink circuit [Link](https://electronics.stackexchange.com/questions/356947/intuitive-and-iterative-approach-to-understanding-of-blinking-led-circuit)
 * DC-DC converter based on solar LED light
	* Dollar Store Garden Lights As ATtiny Power Supplies [Link](https://hackaday.io/project/164682-a-cheap-and-dangerous-garden-light-boost-converter/details)
		* Interesting use of an ATtiny85V to directly control YX8051 by manipulating the solar voltage input. A cap will hold off the 10V voltage spikes.
	* DC-DC converter based on solar LED light [Link](https://skootsone.yolasite.com/solar-led-msp430.php)
		* Seems to be a more stable version but requires a lot of additional components
	* Running a transmitter and a ATtiny85 off a solar led driver [Link](https://web.archive.org/web/20170119175434/http://www.dolenle.com/proj4.html)
		*No images and it is long but I think it will be worth a replica
	* Using a YX805A to get a stable 5V power output for ATtiny85 or others [Link](https://dzrmo.wordpress.com/2017/01/02/garden-light-redux-aka-joule-thief-p-1/)
	* XY8018 boost regulator with trimpot control [Link](http://www.radioradar.net/radiofan/lighting/yx8018.html) [Translated](https://translate.google.com/translate?sl=auto&tl=en&u=http%3A%2F%2Fwww.radioradar.net%2Fradiofan%2Flighting%2Fyx8018.html)
 * Resources
	* Circuit diagrams making use of LED divers [Link](https://skootsone.yolasite.com/solar-led.php)
		* Interesting design for a blinker I might test
		* Interesting component breakdown of what is inside of a solar led driver
	
	
 * Website with some solar circuits maybe useful later [Link](https://www.electroschematics.com/category/solar-projects/)
	
### Progress log 
 * 2020-09-19 Got some garden lights from the store to test these led drivers
 * 2020-09-19 Testing the led drivers. It doesn't look like I can drive an ATtiny85 directly off the boosted voltage
 * 2020-09-19 Fried both led divers. Not sure how but maybe too much heat from the soldering iron
 * 2020-09-21 Officially start project and create Git repository
 * 2020-09-21 Looking for possible designs
 * 2020-09-22 Looking for a analog method to compare voltages
 * 2020-09-23 Created a circuit that turns on a green LED if the resistance is low [link](http://tinyurl.com/y6nuq4zt) 
 * 2020-09-23 Created a circuit design that turns on a red led if the resistance is high [link](http://tinyurl.com/yysaw5k8) 
 * 2020-09-23 Attempted circuit design with both options (not working) [link](http://tinyurl.com/y6hwgj95)
 * 2020-09-24 Looking into logic diagrams
 * 2020-09-24 Got 50 more led divers in the mail
 * 2020-09-25 Created a working simulated circuit at 5v that will turn a red led on if resistance is high or a green led if resistance is low [link](http://tinyurl.com/yyqalqkw)
 * 2020-09-30 Modifying the caterpillar STL for the project
 * 2020-10-01 Searching for a voltage supervisor IC to control when to activate the circuit
 * 2020-10-05 Fined turning the voltage detector circuit for 2V [link](http://tinyurl.com/yxfx4we7)
 * 2020-10-05 Testing sample miller style circuit [Link](http://tinyurl.com/y38uw3cg)
 * 2020-10-05 Improving voltage flow [Link] (http://tinyurl.com/yymy2248)
 * 2020-10-05 Circuit with voltage comparator and solar engine (not really working) [Link](http://tinyurl.com/y5qvovyz)
 * 2020-10-05 Current progress with circuit design [Link](http://tinyurl.com/yxzwtum5)
 * 2020-10-08 Experimenting with the ANA608 solar LED driver
 * 2020-10-08 ANA608 seems to work but I should explore expanded usage scenarios 
 * 2020-10-10 Tested running ATtiny85 directly off ANA608 no luck
 * 2020-10-13 Simple blink circuit from [here](https://www.build-electronic-circuits.com/blinking-led-circuit/)[Link](http://tinyurl.com/y29udzjd)
 * 2020-10-14 Doing research on solar led divers and modifying them for constant boosted DC voltage
 * 2020-10-14 Buy some test parts from mouser
 * 2020-10-15 building test circuits no luck I think mc4742 is an invalid part number
 * 2020-10-17 Tested running ATtiny85 directly off ANA608 no luck
 * 2020-10-26 Mouser parts arrived (2 weeks delivery) 
 * 2020-10-30 Testing [this](https://dzrmo.wordpress.com/2017/01/02/garden-light-redux-aka-joule-thief-p-1/) circuit with the new parts. Seems to work
 * 2020-11-03 Solar power circuit seems to work best with a Schottky diode instead of rectifier diode
 * 2020-11-03 Rectifier diode drops the voltage too low to run green LEDs
 * 2020-11-08 Testing solar power circuit to optimize setup
 * 2020-11-08 Getting stable power from ANA608 stays at about 3.3V when ATtiny85 is doing nothing
 * 2020-11-08 Write initial main AVR sketch
 * 2020-11-08 Created breadboard prototype with moisture sensor, trimpot reference, Green/Red LEDs and microcontroller results successful
 * 2020-11-09 Got the ANA608 with the LDR to work and power the ATtiny85
 * 2020-11-09 LDR helps a lot to delay the start time
 * 2020-11-09 Microcontroller does not reboot when light turned back on only if remove battery
 * 2020-11-09 Smallest capacitor that seems to work okay is 47uF
 * 2020-11-10 Checking space in caterpillar model for battery
 * 2020-11-10 Both batteries seem to fit
 * 2020-11-10 Modifying CAD to make room for LDR
 * 2020-11-16 Needed to use blender to modify CAD
 * 2020-11-16 Printing caterpillar
 * 2020-11-17 Testing new solar panels results are disappointing needs review
 
 
### Next Blog Post
