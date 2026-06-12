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
* Rapid application development RAD, 

## Status
TODO
* <todo: consider, first RPi OS gipo C++ for ISP and I2C, getting this working first before attempting Ubuntu Core deployment, >
* <todo: consider, identify C/C++ libraries for RPi OS GPIO access, >
* <todo: consider, ask question in Raspberry Pi Forum, re processor agnostic and kernel agnostic library for GPIO, set expectations for requirement, outline different leaning objectives >

DONE
* <done: consider, intent to commit>

## Output

### Target - RPi Z 2 W device RPi OS Trixi Lite
Cross compilation tool chain Dell Intel Ubuntu Desktop 24 development environment for deployment to SBC device Raspberry Pi Zero 2 W running the Raspberry Pi OS Trixi Lite .

Prerequisites
* MicroSD card with RPi OS Trixi Lite 32bit or 64bit instance installed, 
* 32bit or 64bit depending on use case, and other functional and non functional requirements, 
* 32bit OS Lite with 32bit apps better performance with minimal 512MB SDRAM onboard RPiZ2W, free 334
* 64bit OS Lite with 64bit apps only slightly poorer performance 512MB SDRAM onboard RPi02W, free 289
* 64bit configure to use Overlay File System to protect card from damage due to swap i/o, write protect the boot partition, also 32bit?
* Lite, headless, no desktop so better performance with minimal 512MB SDRAM onboard RpiZ2W, 
* RPi OS configured to use ssh for login, raspi-config
* container or hypervisor, likely yes to isolate build system from host system
* <todo: consider, investigate pre made build containers, docker, lxd, lxm? trusted source only, rad, >
* <todo: consider, investigate pre made build virtual machines, maax? >

#### Install cross compile toolchain
Requirements
* compiler, armv8, 64bit
* sysroot, libs (catalogue list elsewhere? )
* ...? tbd

```

```

#### Configure CMake for cross compilation
Requirements
* CMake file

Create the CMake text file 
```
$ touch rpi-z-2-w.cmake
```

#### Build and deploy

```

```

### Target - RPi 5 device RPi OS ...?
TBD

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

News Papers - cross compilation
* C/C++ [WS](https://forums.raspberrypi.com/viewforum.php?f=33&sid=6368c5be43ce8f76bd0561fe60e6517c), RPi Forums
* Cross platform build project for RPi Zero W ... [WS](https://forums.raspberrypi.com/viewtopic.php?t=336678), 28 Jun 2022, RPi Forums
* crosscompile for 32 bit armhf (RPi4) ABI-compatibility armv6/v7 [WS](https://forums.raspberrypi.com/viewtopic.php?t=396843&sid=3d14a33149444f0e0fac627492fad734), 13 Mar 2026, RPi Forums
* ...

News Papers - RPi OS version for RPi-0-2-W (02W) 
* Os version suggested for Pi Zero 2 W, [WS](https://forums.raspberrypi.com/viewtopic.php?t=346950), 5 Feb 2023, Raspberry Pi Forums,
* Install 64 bit OS on Raspberry Pi zero 2 W [WS](https://qengineering.eu/install-64-os-on-raspberry-pi-zero-2.html), 14 February 2022 (updated), Q-Engineering, 
