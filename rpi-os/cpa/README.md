# C Cpp ASM cpa

RPi SBC's with RPi OS using C/C++ code base, .

## Notes

Concerns
* Difficulties getting started due to lack of official documentation.
* Likely due to keeping learning pathways open and not prescribing boiler plate solutions. 
* The learning is in the do, try, fail, to success in incremental wins

Targets
* Initial target SBC architecture, RPi Z 2 W [WS](https://www.raspberrypi.com/products/raspberry-pi-zero-2-w/), News [WS](https://www.raspberrypi.com/news/new-raspberry-pi-zero-2-w-2/), Raspberry Pi,
* System in a package (SIP), RP3A0 [WS](https://www.raspberrypi.com/documentation/computers/processors.html#rp3a0), Raspberry Pi,
* System on a chip (SOC), Broadcom BCM2710A1, quad-core 64-bit ARM Cortex A53, and 512MB SDRAM
* BCM2836 Arm-local peripherals, ARM Quad A7 core [PDF](https://pip-assets.raspberrypi.com/categories/506-raspberry-pi-2-model-b/documents/RP-008250-DS-1-bcm2836-peripherals.pdf), Raspberry Pi, applies also to BCM2837 and RP3A0
* Arm Cortex-A53 MPCore Processor Technical Reference Manual [WS](https://developer.arm.com/documentation/ddi0500/latest/), ARM, 
* ...

Objectives
* Cross compile toolchain, dev env Ubuntu Desktop deployment env RPi SBC running RPi OS e.g. (RPi Z 2 W running Trixi Lite)
* Cross compile Bosch BMV sensor C/Cpp code for deployment to RPi Z 2 W running Trixi Lite

## Status
TODO
* <todo: consider, first RPi OS gipo C++ for ISP and I2C, getting this working first before attempting Ubuntu Core deployment, >
* <todo: consider, identify C/C++ libraries for RPi OS GPIO access, >
* <todo: consider, ask question in Raspberry Pi Forum, re processor agnostic and kernel agnostic library of GPIO, set expectations for requirement, outline different leaning objectives >

DONE
* <done: consider, intent to commit>

## Libs

### GPIO C/C++ libs

Deprecated
* WiringPi
* bcm2835

## References

News Papers - C/C++, libs
* Getting Started with C++ on Raspberry Pi (guide & examples), [WS](https://raspberrytips.com/use-c-on-raspberry-pi/), Last updated on September 18, 2025, Raspberry Pi Tips, but wiringPi.h used which is deprecated
* Raspberry Pi 5 GPIO programming with C [WS](https://forums.raspberrypi.com/viewtopic.php?t=358676), 30 Oct 2023, Raspberry Pi Forums, 
* How to control the GPIO pins using c++, [WS](https://forums.raspberrypi.com/viewtopic.php?t=100028), 13 Feb 2015, Raspberry Pi Forums, 
* Additional i2c_gpio is not detected on Ubuntu Server 20.04 / RPi Zero 2 W / A+ [WS](https://raspberrypi.stackexchange.com/questions/135931/additional-i2c-gpio-is-not-detected-on-ubuntu-server-20-04-rpi-zero-2-w-a), 31 Jan 2022, StackExchange, Raspberry Pi, 
* How do I program a Sensor with C and no TP libraries, [WS](https://forums.raspberrypi.com/viewtopic.php?t=255741), 31 Oct 2019, Raspberry Pi Forums, 
* ...


