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
 * Design a circuit that will turn on a red led if the resistance is high and a green led if the resistance is low
 * Test led drivers
### Notebook
 * Online circuit simulator [link](http://falstad.com/circuit/)
 * Case option: [Neko Submarine](https://www.thingiverse.com/thing:3081218) 
 * Case option: [cute caterpillar](https://www.thingiverse.com/thing:3598906)
 * Case option: [Pom Pom Purin keychain](https://www.thingiverse.com/thing:1188272)
### Progress log 
 * 2020-09-21 Officially start project and create Git repository
 * 2020-09-21 Looking for possible designs
 * Looking for a analog method to compare voltages
 * Created a circuit that turns on a green LED if the resistance is low [link](http://falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWK0BsCBMkAcYCcZMBmQyMAkLSEJAFkICgA3cXdEQjFtyqXmqpFSHQE9AC7tMITFnYpZM3hAC06aGTCRC6bawTzOMAOw0jBMAizE9WdLnBx6YFG0LyQuFHNl42bACYApgBmAIYArgA2YsqRgf5KvDCk9ABO0liyPOiZ0thK8GkZCvk5shxsVJqOAO5cFFRlDVD0dU08bllCrd7NnR5ekD3ajaW5ikN1-ejoNL0VLVPuC00Lk8XsnL6blfRAA) 
 * Created a circuit design that turns on a red led if the resistance is high [link](http://falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWEB2WZIICxgEwGZMA2QgDmRMJAWSpEzwCgA3cXEPBHVrkyKfzHyR8R0BAwBOIHCRIhe02dMhy+OeHEmK5OZFxlyOXPuk1hCXc3wVXwATn0gAJgFMAZgEMArgBsALgC0Pi5O4PyikGAMfso6KuCEavF8ARA40GDImCSCKpEIWHZ4IAEwyASJeMgWKnh2CGBypgwA7trSeu3qqq3tNonyIr22NmwKkMMDODiYCXxGUL0G7JxzK8aT86tgbAsTbcvdsccTAPa0hLN8gnZ20mJQsHDkuMLgDEA) 
 * Attempted circuit design with both options (not working) [link](http://falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWEB2WZIICxgEwGZMA2QgDmRMJUhCUzwCgA3cXEPBHFzk63kTakj4wE9AC5sc1KSTakQMqOBABaGBRwI8UnAE5CMsMijQSmXcjyQ8YAUZJ4y4OPTAG5snh-C7OnACYApgBmAIYArgA2YiqRgf5KELxo9ABOCiSe0pkKkLLS8C7pODk4yH457JzU6C4A7pIFsiXNeVD0DXjyODiY3lXtnfIDLWwc7W6cbtRe0z5+IEFhUTFxCUlKMJBg4rmtsnOK1CpJpuaW1rbb5I7Game6ZggkvZACFAhItR0ZzeW-e0GANmhBmvB+c1mrC8kAhoIUvXA8IGsIaowGcxRcOoGNYWKGWWB4LRpTaiiO9AA9s4QIQ+tQBLpdOBoJoTPByLghOB6EA)
 
### Next Blog Post
P08_01_00 Solar HydroBeacon
Sometimes my projects can get a little mixed up and it's hard to say exactly where to start. For people with a keen eye you might have noticed that this project has the ID P08_01_00 instead of the expected P08_00_00. That's because this is actually a second version of this project. The original project, which is still under wraps, got started but I've already decided to put a cap on it before I've even posted about it. I'm keeping the P08_01_00 ID because there is a strong likelihood that that project might come up again. 

Anyway this project came about because I wanted to create a simple soil moisture sensor that would be pretty much set and forget. The idea is to have something that blinks either green or red if the soil moisture is low or sufficient depending on a reference value. Originally it would be a battery powered something but it occurred to me that people who forget to water their plants are also the type of people who forget to charge the batteries on their soil moisture sensors. As such, this project is going to be a solar project. Other then that a lot of the specifics are still not quite nailed down. So hang on for the ride, it's another project. 