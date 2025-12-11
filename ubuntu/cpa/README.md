# C Cpp ASM cpa 



## Notes

Work in progress wip setup of C/C++ toolchains for development on Ubuntu LTS 24.04.3 linux .

## TODO
* <todo; consider, include link to Ubuntu tuturoal for GCC install in references, >

## DONE
* <done; intent to commit, >

## Issues

### Issue 1
Could not find gcc or g++ or make installed on Ubuntu LTS 24.04.3 . Had mistakenly assumed they were installed by default.
* Resolved. The Ubuntu Desktop default install 'does not include basic develop tooling' [WS](https://documentation.ubuntu.com/ubuntu-for-developers/explanation/install-ubuntu/#developer-tooling)

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
```

## Installed 
How to set up a development environment for GCC on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/howto/gcc-setup/), Ubuntu, documentation, 

### GCC
```
$ sudo apt install gcc g++
[sudo] password for york-earwaker: 
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following package was automatically installed and is no longer required:
  libllvm19
Use 'sudo apt autoremove' to remove it.
The following additional packages will be installed:
  g++-13 g++-13-x86-64-linux-gnu g++-x86-64-linux-gnu gcc-13
  gcc-13-x86-64-linux-gnu gcc-x86-64-linux-gnu libasan8 libcc1-0 libgcc-13-dev
  libhwasan0 libitm1 liblsan0 libquadmath0 libstdc++-13-dev libtsan2 libubsan1
Suggested packages:
  g++-multilib g++-13-multilib gcc-13-doc gcc-multilib make autoconf automake
  libtool flex bison gcc-doc gcc-13-multilib gcc-13-locales
  gdb-x86-64-linux-gnu libstdc++-13-doc
The following NEW packages will be installed:
  g++ g++-13 g++-13-x86-64-linux-gnu g++-x86-64-linux-gnu gcc gcc-13
  gcc-13-x86-64-linux-gnu gcc-x86-64-linux-gnu libasan8 libcc1-0 libgcc-13-dev
  libhwasan0 libitm1 liblsan0 libquadmath0 libstdc++-13-dev libtsan2 libubsan1
0 upgraded, 18 newly installed, 0 to remove and 7 not upgraded.
Need to get 49.1 MB of archives.
After this operation, 170 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
```

```
$ gcc --version
gcc (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```
$ sudo apt autoremove
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following packages will be REMOVED:
  libllvm19
0 upgraded, 0 newly installed, 1 to remove and 7 not upgraded.
After this operation, 129 MB disk space will be freed.
Do you want to continue? [Y/n] y
(Reading database ... 193155 files and directories currently installed.)
Removing libllvm19:amd64 (1:19.1.1-1ubuntu1~24.04.2) ...
Processing triggers for libc-bin (2.39-0ubuntu8.6) ...
```

### debuggers, profilers, other tools

```
$ sudo apt install -y gdb valgrind
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
gdb is already the newest version (15.0.50.20240403-0ubuntu1).
gdb set to manually installed.
Suggested packages:
  valgrind-dbg valgrind-mpi kcachegrind alleyoop valkyrie
The following NEW packages will be installed:
  valgrind
0 upgraded, 1 newly installed, 0 to remove and 7 not upgraded.
Need to get 14.9 MB of archives.
After this operation, 78.8 MB of additional disk space will be used.
Get:1 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 valgrind amd64 1:3.22.0-0ubuntu3 [14.9 MB]
Fetched 14.9 MB in 1s (16.8 MB/s)    
Selecting previously unselected package valgrind.
(Reading database ... 193149 files and directories currently installed.)
Preparing to unpack .../valgrind_1%3a3.22.0-0ubuntu3_amd64.deb ...
Unpacking valgrind (1:3.22.0-0ubuntu3) ...
Setting up valgrind (1:3.22.0-0ubuntu3) ...
Processing triggers for man-db (2.12.0-4build2) ...
```

### build systems

```
$ sudo apt install -y make cmake
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following additional packages will be installed:
  cmake-data libjsoncpp25 librhash0
Suggested packages:
  cmake-doc cmake-format elpa-cmake-mode ninja-build make-doc
The following NEW packages will be installed:
  cmake cmake-data libjsoncpp25 librhash0 make
0 upgraded, 5 newly installed, 0 to remove and 7 not upgraded.
Need to get 13.7 MB of archives.
After this operation, 49.5 MB of additional disk space will be used.
Get:1 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 libjsoncpp25 amd64 1.9.5-6build1 [82.8 kB]
Get:2 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 librhash0 amd64 1.4.3-3build1 [129 kB]
Get:3 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 cmake-data all 3.28.3-1build7 [2,155 kB]
Get:4 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 cmake amd64 3.28.3-1build7 [11.2 MB]
Get:5 http://gb.archive.ubuntu.com/ubuntu noble/main amd64 make amd64 4.3-4.1build2 [180 kB]
Fetched 13.7 MB in 1s (16.6 MB/s)
Selecting previously unselected package libjsoncpp25:amd64.
(Reading database ... 193521 files and directories currently installed.)
Preparing to unpack .../libjsoncpp25_1.9.5-6build1_amd64.deb ...
Unpacking libjsoncpp25:amd64 (1.9.5-6build1) ...
Selecting previously unselected package librhash0:amd64.
Preparing to unpack .../librhash0_1.4.3-3build1_amd64.deb ...
Unpacking librhash0:amd64 (1.4.3-3build1) ...
Selecting previously unselected package cmake-data.
Preparing to unpack .../cmake-data_3.28.3-1build7_all.deb ...
Unpacking cmake-data (3.28.3-1build7) ...
Selecting previously unselected package cmake.
Preparing to unpack .../cmake_3.28.3-1build7_amd64.deb ...
Unpacking cmake (3.28.3-1build7) ...
Selecting previously unselected package make.
Preparing to unpack .../make_4.3-4.1build2_amd64.deb ...
Unpacking make (4.3-4.1build2) ...
Setting up make (4.3-4.1build2) ...
Setting up libjsoncpp25:amd64 (1.9.5-6build1) ...
Setting up librhash0:amd64 (1.4.3-3build1) ...
Setting up cmake-data (3.28.3-1build7) ...
Setting up cmake (3.28.3-1build7) ...
Processing triggers for man-db (2.12.0-4build2) ...
Processing triggers for libc-bin (2.39-0ubuntu8.6) ...
```

## References

Ubuntu gcc g++
* Checking If GCC Compiler Is Installed On My Linux System, [WS](https://www.osetc.com/en/checking-if-gcc-compiler-is-installed-on-my-linux-system.html), 



