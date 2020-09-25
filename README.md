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
 * Order solar panels
 * look into a diy voltage comparator (OpAmp) 
 * Test led drivers
### Notebook
 * Online circuit simulator [link](http://falstad.com/circuit/)
 * Case option: [Neko Submarine](https://www.thingiverse.com/thing:3081218) 
 * Case option: [cute caterpillar](https://www.thingiverse.com/thing:3598906)
 * Case option: [Pom Pom Purin keychain](https://www.thingiverse.com/thing:1188272)
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
 * 2020-09-24 Got 50  more led divers in the mail
 * 2020-09-25 Created a working simulated circuit at 5v that will turn a red led on if resistance is high or a green led if resistance is low [link](http://tinyurl.com/yyqalqkw)
 
### Next Blog Post
Logic gates n stuff
In my previous post, I was working on some sort of way to switch on one led if my detected voltage was low and switch on another led if my voltage was high. I was running into some issues but I think I might have just figured it out. After several hours of staring at the circuit simulator, rearranging components and changing resistor values I eventually decided that I would need to start from scratch and attempt it from a logic perspective. 

Normally I would handle something this with a microcontroller and software. In essence I would have some code like this:
if (Vin > Threshold)
{
	digitalWrite(Red_LED,HIGH);
	digitalWrite(Green_LED,LOW);
}
else
{
	digitalWrite(Green_LED,HIGH);
	digitalWrite(Red_LED,LOW);
}
My issue though is that none of the microcontrollers I have used work anywhere near the 1.5V limits I'm working with. The closest option would the ATtiny85V at 1.8V. I've considered using some other microcontrollers like the C8051F920 microcontroller from Silicon Laboratories that can run easily below 1.5V but they would involve a lot of new skill learning just to switch a few LEDs. Additionally I think it would probably be current heavy and be total overkill for what I'm going for. Just for reference though, I've spent a few days looking at that possibility because I would love to branch out to other platforms beyond Arduino and do more work in ultra low power systems. Anyway that is going to be for another project and it was time well spent I think.

Getting back to logic though. One of the things I remember from a very poorly taught electronics 101 class is there is something called logic gates. They act pretty much as a hardware equivalent to programming language. If you want to develop a circuit that gives you a specific output for any specific given input thats what you need. In my case I need a circuit that works something like this:
if InputA is high -> OutputA is high and OutputB is low
if InputA is low -> OutputB is high and OutputA is low
After a quick refresher on logic gates I came up with something like this:

I have an input that is split with one input going to a buffer and another going to an inverter. As you can see from the truth table if my input is high then OutputA is high and OutputB is low. The inverse applies if my input is low. Okay so now that that part is done how do I get from logic gates to actual circuits. Well simply, all logic gates can be modeled with transistors. I assume one can buy ICs that are specifically certain types of gates but for something this simple it can be easily done with transistors. A huge shout out to www.electronics-tutorials.ws for being an amazing resource for detailed information on electronics presented in an easily digestible manner (where where you when I was in college?). Here is a diagram of an inverter made with transistors and the buffer is basically a simple wire since input high = output high and vise versa.

From the previous image I was able to design a working circuit here. There is still a lot that need to be done with it like tweaking the resistor values to match up with the moisture sensor and get it to work on 1.5V but the logic clearly seems to work, so that is a huge step forward. In my circuit the potentiometer is the moisture sensor since the resistance changes depending on the soil conductivity. The 5k resistor will be replaced with a trimpot for tuning the threshold voltage at which it changes from red to green.
Image

 
	
