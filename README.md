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
 
### Next Blog Post
2020-10-08 <font color="63C0EC"><b>P08_01_00 Logic gates n stuff</b></font>
<font color="63C0EC">Category:</font> Gardening
<font color="63C0EC">Tags:</font> Arduino, Domotics, Engineering, Gardening, Home Automation, P08_01_00, Plants, Software, Solar
<a href="https://kionokitse.wordpress.com/solar-hydrobeacon/">Project Page</a>