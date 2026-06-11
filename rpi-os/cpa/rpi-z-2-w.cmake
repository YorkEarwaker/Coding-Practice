# Raspberry Pi Zero 2 W CMake 
# rpi-z-2-w.cmake

# define target system
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# define cross compiler
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# Set the sysroot to Pi rootfs image mounted or extracted
# Doing so ensures link to libraries that are Trixi Lite compatible
# set(CMAKE_SYSROOT /path/to/your/rpi/rootfs)
# set(CMAKE_FIND_ROOT_PATH ${CMAKE_SYSROOT})

# Optimisation for Cortex-A53 processor, which is the CPU onboard the RPi Zero 2 W
set(CMAKE_C_FLAGS "" CACHE STRING "-mcpu=cortex-a53 -mfpu=neon-fp-armv8" FORCE)
set(CMAKE_CXX_FLAGS "" CACHE STRING "-mcpu=cortex-a53 -mfpu=neon-fp-armv8" FORCE)


