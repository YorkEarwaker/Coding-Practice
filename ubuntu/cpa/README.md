# C Cpp ASM cpa 

C and C++ coding environment 

See also
* Build, automation, [GH](https://github.com/YorkEarwaker/Automation/tree/main/build), cmake and other build tools

## Notes

Targets
* Ubuntu, Intel
* Raspberry Pi SBC, ARM R?
* Raspberry Pi MCU, ARM M?
* An other architecture, 

## TODO
* <todo; consider, identify a standards specification for object code file extension naming postfix, bad form in unix C/C++ coding practice? >
* <todo; consider, install ninja build system, for use with CMake, pro's and con's >
* <todo; consider, style guide (cpp coding standards), PascalCase for types and classes and camelCase for variables and functions? good standard to adopt? >
* <todo; consider, style guide (cpp coding standards), all c++ source file to use .cpp? extension, all header files to use .hpp? extension, > 
* <todo; consider, check that C/C++ cross comparability requires .h extension for c++ headers, presume there is some work arround to be found, >

## DONE
* <done; intent to commit, >
* <done; consider, include link to Ubuntu tutorial for GCC install in references, >
* <done; consider, hello world, C and C++ example, compiled classes to machine code, executed in terminal window. >
* <done; consider, Work in progress wip setup of C/C++ toolchains for development on Ubuntu LTS 24.04.3 linux . completed install and tested first iteration, wip>
* <done; complete Ubuntu developer gcc tutorial, >
* <done; complete Ubuntu developer clang tutorial, with 'hello world' src code for both C and C++ >

## Issues

### Issue 1
Could not find gcc or g++ or make installed on Ubuntu LTS 24.04.3 . Had mistakenly assumed they were installed by default.
* Resolved. The Ubuntu Desktop default install 'does not include basic development tooling' [WS](https://documentation.ubuntu.com/ubuntu-for-developers/explanation/install-ubuntu/#developer-tooling)

```
$ g++ --version
Command 'g++' not found, but can be installed with:
sudo apt install g++
$ make --version
Command 'make' not found, but can be installed with:
sudo apt install make        # version 4.3-4.1build1, or
sudo apt install make-guile  # version 4.3-4.1build1
$ gcc --version
Command 'gcc' not found, but can be installed with:
sudo apt install gcc
$ clang --version
Command 'clang' not found, but can be installed with:
sudo apt install clang
```

## Installed 
* How to set up a development environment for GCC on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/howto/gcc-setup/), Ubuntu, documentation, 
* How to set up a development environment for Clang on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/howto/clang-setup/), Ubuntu, documentation, 

### GCC G++ Clang
```
$ sudo apt install gcc g++
```

```
$ gcc --version
gcc (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

$ g++ --version
g++ (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```
$ sudo apt install clang
```

```
$ clang --version
Ubuntu clang version 18.1.3 (1ubuntu1)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```

### debuggers, profilers, other tools

```
$ sudo apt install -y gdb valgrind
```

```
$ gdb --version
GNU gdb (Ubuntu 15.1-1ubuntu1~24.04.1) 15.1
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```

```
$ valgrind --version
valgrind-3.22.0
```

### build systems

```
$ sudo apt install -y make cmake

```

```
$ make --version
GNU Make 4.3
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

$ cmake --version
cmake version 3.28.3

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

## References

Ubuntu gcc g++
* Checking If GCC Compiler Is Installed On My Linux System, [WS](https://www.osetc.com/en/checking-if-gcc-compiler-is-installed-on-my-linux-system.html), osetc, 

Ubuntu development
* Develop with GCC on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/tutorials/gcc-use/), Ubuntu, documentation, 
* Develop C and C++ with Clang on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/tutorials/clang-use/), Ubuntu documentation
 

