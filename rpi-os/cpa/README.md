# C Cpp ASM cpa

RPi SBC's with RPi OS using C/C++ code base, . 

## Notes

Concerns
* Difficulties getting started due to lack of official documentation.
* Likely due to keeping learning pathways open and not prescribing boiler plate solutions. 
* The learning is in the do, try, fail, to success in incremental wins
* RPi corporate interests drive some sub-optimal outcomes, what are these precisely?
* RPi Forums represent RPi corporate interests, how much is this the case?
* ...

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
* <todo: consider, first instance, hello world cross compile for target rpi os Trixi on rpi z2w from ubuntu desktop 24 dev env, >
* <todo: consider, simple C++ for devie like DHT22 temperature sensor, link to specific electrical engineering project /een/snr-? , already achieved with micro python>
* <todo: consider, simple C++ for devie like Bosche temperature sensor, bit more complex than DHT22, link to specific electrical engineering project /een/snr-? already achieved with micro python >
* <todo: consider, entry C++ for device like Bosche BMV080 particulate matter sensor, hello world first contact equivalent >
* <todo: consider, entry C++ system of systems, Bosche temp sensor + Bosche BMV080 pms, + small screen device? >
* <todo: consider, first RPi OS gipo C++ for ISP and I2C, getting this working first before attempting Ubuntu Core deployment, >
* <todo: consider, identify C/C++ libraries for RPi OS GPIO access, >
* <todo: consider, ask question in Raspberry Pi Forum, re processor agnostic and kernel agnostic library for GPIO, set expectations for requirement, outline different leaning objectives >
* <todo: consider, does Boost compromise security? are any of these hardended? would it pass SBoM requirements? Ubunutu does not have latest versions, for latest versions download source and compile libs, >
* <todo: consider, move some of the output section to a /hwd/README.md >

DONE
* <done: consider, intent to commit>

## Output

### Target - RPi Z 2 W device RPi OS Trixi Lite
Cross compilation tool chain Dell Intel Ubuntu Desktop 24 development environment for deployment to SBC device Raspberry Pi Zero 2 W running the Raspberry Pi OS Trixi Lite .

Prerequisites
* MicroSD card with RPi OS Trixi Lite 32bit or 64bit instance installed, 
* 32bit or 64bit depending on use case, and other functional and non functional requirements, 
* 32bit OS Lite (with 32bit apps) better ram performance with minimal 512MB SDRAM onboard RPiZ2W, free 334MB
* 64bit OS Lite (with 64bit apps) only slightly poorer ram performance 512MB SDRAM onboard RPi02W, free 289MB
* 64bit OS offers specific improved performance including; optimises calculation performance, uses address space more efficiently
* 64bit configure to use Overlay File System to protect card from damage due to swap i/o, write protect the boot partition, hardening for production. also 32bit? yes.
* Lite, headless, no desktop so better performance with minimal 512MB SDRAM onboard RpiZ2W, 
* RPi OS configured to use ssh for login, raspi-config
* <todo: consider, if must use 64bit desktop then have to use SD card swap space, investigate replacing rpi-os dphys-swapfile with the traditional Linux swap mechanism, allocate min 2gig upto 6gig more? for swap space, but this will conflict with Overlay File System suggestion above, reducing lifetime of sd card >
* container or hypervisor, likely yes to isolate build system from host system
* <todo: consider, investigate pre made build containers, docker, lxd, lxm? trusted source only, rad, >
* <todo: consider, investigate pre made build virtual machines, maax? >

#### Install cross compile toolchain
Status; Success! :)
* <info: consider, the gnu arm libraries won't harm the linux distro OS install so it is okay in this simple case to load them into default locations>
* <todo: consider, determine default install locations for gnu arm libs, >
* <todo: consider, another project to craete a container sandbox to load gnu arm libs into for self contained dev env on dev box, might require a vm>

Requirements
* compiler, armv8, 64bit
* compiler, armv8, 32bit? tbd

download tool chain for ARMv8 64bit architecture
```
$ sudo apt update
$ sudo apt install gcc-aarchi64-linux-gnu g++-aarch64-linux-gnu
```
#### Create hello world files
Status; Success! :)
* create file
* write code
* compile code

create the c file
```
$ touch hwd_x/hello_rpiziiw.c
```

use preferred text editor to enter code into c class file and save
* to use nano on cli; `$ nano hwd_x/hello_rpiziiw.c`
```
// C
# include <stdio.h>

int main() {
  printf("Hello from Raspberry Pi Zero 2 W! First contact, C cross compile");
  return 0;
}
```

compile from cli
* target the A53-Cortex core
```
$ aarch64-linux-gnu-gcc -mcpu=cortex-a53+fp+simd -o hwd_x/hello_rpiziiw_c hwd_x/hello_rpiziiw.c
```

repeat again but for a c++ hello world instance
```
$ touch hwd_x/hello_rpiziiw.cpp
```

use preferred text editor to enter code for c++ file and save
* to use nano on cli; `$ nano hwd_x/hello_rpiziiw.cpp` 
```
// C++
# include <iostream>

int main() {
  std::cout << "Hello from Raspberry Pi Zero 2 W! First contact, C++ cross comile";
  return 0;
}
```

compile from cli
* target the A53-Cortex core
```
$ aarch64-linux-gnu-g++ -mcpu=cortex-a53+fp+simd -o hwd_x/hello_rpiziiw_cpp hwd_x/hello_rpiziiw.cpp
```

#### Do some GPIO hello world thing tbc
Status: TBD, 
* <todo: consider, some secondary project so as not to clutter this hwd_x example, say i2c_x or spi_x or uart_x or similar? >
* sysroot, libs (catalogue list elsewhere? ), necessary for GPIO I2C SPI etc 

#### Configure CMake for cross compilation
Status: TBD
* <todo: consider, first test with this CMakeLists.txt file and iron out any errors, >

Requirements
* CMake file

Create the CMake text file 
```
$ touch hwd_x/CMakeLists.txt
```

CMakeLists.txt file contents
```
tbd
```



#### Build and deploy
Status: TBD
* <todo: consider, likely requires further setup of RPi Z 2 W for ssh over wifi >

not tested or used. tobe verified. wip
```
scp hello pi@<raspberry_pi_ip>:~
ssh pi@<raspberry_pi_ip> "./hello"   
```

#### Test hwd files on different OS
Status: TBD
* Start multi path compile and deployment for different targets 
* Run hello world files on RPi OS Trixi Lite (headless) on SBC RPi Z2W
* Run hellow world file on Ubuntu server (headless by default) on SBC RPi Z2W
* <todo: consider, testing on Ubuntu server is a step toward pipeline to Ubuntu core >
* <todo: consider, other RPi MCU and SBC hardware >
* <todo: consider, other hardware like Arduino, ESP32, ... >
* <todo: consider, unit test, as seperate step beuilding on this?>
* <todo: consider, docs generation, as seperate step building on this?>

Run hello world files on RPi OS Trixi Lite (headless) on SBC RPi Z2W 
* Status; Success! :)
* Copy files to MicroSD card /rootfs/home/
* Connect to RPi Z 2 W
* Test files cross compiled on Ubuntu Desktop dev environment
* Execute the compiled C and C++ files on RPi Z 2 W
```
york-earwaker@raspberrypi:~/dev/repo/coding-practice/rpi-os/cpa$ ./hwd_x/hello_repiziiw_c
Hello from Raspberry Pi Zero 2 W! First contact, C cross compile.
york-earwaker@raspberrypi:~/dev/repo/coding-practice/rpi-os/cpa$ ./hwd_x/hello_repiziiw_cpp
Hello from Raspberry Pi Zero 2 W! First contact, C++ cross compile.
york-earwaker@raspberrypi:~/dev/repo/coding-practice/rpi-os/cpa$ 
```

Run hellow world file on Ubuntu server (headless by default) on SBC RPi Z2W
* Status; TBD
```
TBD
```

Trouble shooting
* If you can't exceute the files check if the execute permission was set
* 755 reports it is executable, as below
* 644 reports it is not executable
```
york-earwaker@raspberrypi:~/dev/repo/coding-practice/rpi-os/cpa$ stat -c '%a' hwd_x/hello_repiziiw_c
775
```

* <todo: consider, cli to make file executable here>

### Target - RPi 5 device RPi OS ...?
Status: TBD

## Libs

### GPIO C/C++ libs

Deprecated
* WiringPi
* bcm2835

### Standard C++

* Standard C++ [WS](https://isocpp.org/), ISO, 
* C++ Standard Library [WS](https://en.cppreference.com/cpp/standard_library) cppreference .com, 

<todo: consider, moving the links below this line to another location, >

### Third party - utilities, helpers, productivity, accelerators, add-on's, numerical and scientific computing, 
Which of the long list of frameworks and utilities are a good fit for RPi? Evaluate some.

* Boost org [WS](https://www.boost.org/) ubuntu luanchpad [WS](https://launchpad.net/~boost-latest), a de facto extension to the C++ Standard Library
* Crow, org [WS](https://crowcpp.org/master/), open collective (crowd funding) [WS](https://opencollective.com/crow), web services using http and websockts, uses Boost lib,
* Dragon, org ?
* ...

Lists 
* Awesome Cpp [GH](https://github.com/fffaraz/awesome-cpp), Faraz, CA, US, curated list of cpp utilities frameworks and so on
* Awesome Modern Cpp [GH](https://github.com/rigtorp/awesome-modern-cpp), [WS](https://awesomecpp.com/), 
* C++ Tools Ecosystem [WS](https://hackingcpp.com/cpp/tools/ecosystem), h/cpp, 
* List of C++ software and tools, [WP](https://en.wikipedia.org/wiki/List_of_C++_software_and_tools), 

### Toolchains

* Toolchains, [WS](https://www.toolchains.net/)
* ...

Courses
* Cpp Introduction, [WS](https://learning.rc.virginia.edu/courses/cpp-introduction/), University of Virginia
* <todo: consider, source similar introductions from UK universities, >

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
* Cross-Compiling for Raspberry Pi: Getting Started and Troubleshooting [WS](https://earthly.dev/blog/cross-compiling-raspberry-pi/), 19 July 2023 (updated), Aniket Bhattacharyea, Earthly
* ...

News Papers - RPi OS version for RPi-0-2-W (02W) 
* Raspberry Pi OS (64-bit) [WS](https://www.raspberrypi.com/news/raspberry-pi-os-64-bit/), 2 Feb 2022, Gordon Hollingworth, Raspberry Pi, News
* Os version suggested for Pi Zero 2 W, [WS](https://forums.raspberrypi.com/viewtopic.php?t=346950), 5 Feb 2023, Raspberry Pi Forums,
* Install 64 bit OS on Raspberry Pi zero 2 W [WS](https://qengineering.eu/install-64-os-on-raspberry-pi-zero-2.html), 14 February 2022 (updated), Q-Engineering, 
* 32 or 64bit OS for Zero 2w and Motion [WS](https://forums.raspberrypi.com/viewtopic.php?t=356688), 22 Sep 2023, Raspberry Pi Forums
