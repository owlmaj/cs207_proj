# Mini Minecraft Creeper Robot

# Introduction
The project undertaken for this term is the construction of a miniature Minecraft Creeper robot.
The basic requirements of the robot is that its head would be controlled by a servo motor unit allowing it to move its head within a set range of degrees. The movement will then be powered by a DC motor. All of this will be controlled by the main control unit which is the Arduino.

# Inspiration
The project is simply inspired by the want to create something similar to a project I found on makezine.com which is the creeper robot built by John Baichtal. This plus my recent interest into the game Minecraft has led me to pick this project as my undertaking for the CS207 major project.

# Requirements
* 1 Breadboard
* 1 Arduino Uno 
* 1 Arduino USB connector
* 1 diode
* 1 transistor
* 1 Servo motor
* 2 10k resistors
* 1 Dual-shaft DC motor
* 4 Wheels
* Either a rod for the second set of wheels or another dual-shaft motor that wont be powered
* Multiple wires
* Some plywood
* Glue gun

# Build Instructions

For the body, there will be three main components: head, torso, and base

The head is a 4cm by 4cm cube of wood consisting of 6 plates glued together. The bottom will have a ridge carved out for the servo arm to be glued into.

The torso consists of 2 4cm by 5cm and 2 5cm by 2.5cm pieces of wood glued together to form a body. Within the upper part is the servo motor glued to the inside. Attach head unto it. 

The base is a 7cm by 4cm piece of wood with the motors glued underneath. A ridge is carved out where the wires of the motor would go to. The torso is to be attached in the center of the base. Attach the wheels to the motor.

After that, you may choose to paint the creeper pattern or print out an img and glue it over the body.

For the circuit, build like so:

![image](https://github.com/owlmaj/cs207_proj/blob/master/images/Capture.JPG)

Except with some changes: attach the button input pin to pin 2, attach the motor control pin to pin 13, and attach the servo control pin to pin 12.

After all that, simply download the code into the Arduino and you're good to go.

The single button activates the motor, causing the robot to move forward.


# Team
Eli Joshua Garing (by myself)

# Sources 
https://makezine.com/projects/craft-minecraft-creeper-robot/
