
#ExoTouch - DIY VR Haptic Glove
ExoTouch is an open-source project aimed at developing a DIY VR haptic glove that provides a realistic sense of touch for virtual reality experiences. This repository contains the hardware and software designs for several prototypes of the ExoTouch glove.

##Overview
We have produced several versions of the ExoTouch glove, each with different architectures and features, based on the  Lucid Glove: a cheap VR haptic glove that only requires potentiometers, servo motors, strings, and an ESP. It was designed By Lucas VRTech (all credits to https://github.com/LucidVR/lucidgloves)

The ExoTouch V1 is based on a three-piece exoskeleton that pulls a toothed bar that a servo-motor can lock to provide haptic feedback. The system was enhanced with a rudimentary PCB to control the servo motors and send the potentiometer information to the computer.

ExoTouch V2 was a prototype using a semi-rigid tube to connect the front of the finger to the potentiometer. However, this design was not promising and was quickly abandoned.

Finally, ExoTouch V3 is the latest version of the glove, based on the work of Nick Iacobbo. This exoskeleton follows each phalange of the hand, allowing much more efficient tracking of the position of the fingers. The potentiometers have been mounted on the back of the hand, offering better wrist flexibility. A rudimentary PCB has been added to send the potentiometer values to the computer, using an ESP32-based MCU board. This board includes a charge controller, allowing a battery to be directly connected to the ESP, making the glove wireless.

##Force Feedback System
The ExoTouch V3 introduced a new force feedback system, similar to bike brakes. Two brake plates are pressed against the potentiometer's moving part, introducing a friction force that blocks the fingers. Although the force feedback system is not as powerful as some commercial haptic gloves, it provides a realistic sense of touch for VR experiences.

##Limitations and Future Work
The ExoTouch gloves still have some limitations, including the force feedback system not being as strong as commercial gloves, the need to place the controller at the back of the hand, and the volume of the glove being a bit too large. However, we believe that this project can be improved by developing more powerful force feedback systems, improving the glove design, exploring alternative control mechanisms, and conducting further user studies to better understand the needs of different user groups.

##Conclusion
ExoTouch is a DIY VR haptic glove project that aims to provide a more immersive virtual reality experience. By sharing our designs and code, we hope to encourage others to experiment and improve upon our work. We welcome feedback, contributions, and collaborations from the community.
