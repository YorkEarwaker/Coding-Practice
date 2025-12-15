# Hello world hwd

First c and cpp hello world files on Ubuntu linux. 

## TODO
* <todo; consider, iterate code, >

## DONE
* <done; consider, intent to commit>
* <done; consider, hello world class in C, success >
* <done; consider, hello world class in Cpp, success >
* <done; consider, Hitchhickers Guide class in C, success >

## Output
Success! Use of GCC and G++ to compile hello world classes to machine code executable. 

Basic process and code described in, Develop with GCC on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/tutorials/gcc-use/)

### Compiling, 
Source code to machine code. Success.

```
$ dir
hwd.c  hwd.cpp	lue.c  README.md

$ gcc lue.c -o lue

$ dir
hwd.c  hwd.cpp	lue  lue.c  README.md

$ ./lue
Hello, Arthur P. Dent!
The answer to life the universe and everything is 42.

$ gcc hwd.c -o hwdc

$ ./hwdc
Hello Ubuntu.

$ g++ hwd.cpp -o hwdcpp

$ ./hwdcpp
Hello Ubuntu.

$ ls -l
total 64
-rw-rw-r-- 1 york-earwaker york-earwaker    76 Dec 12 15:48 hwd.c
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 15:48 hwdc
-rw-rw-r-- 1 york-earwaker york-earwaker    76 Dec 12 15:49 hwd.cpp
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 15:49 hwdcpp
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 15:44 lue
-rw-rw-r-- 1 york-earwaker york-earwaker   174 Dec 12 15:42 lue.c
-rw-rw-r-- 1 york-earwaker york-earwaker   370 Dec 12 15:54 README.md
```

### Debugging, simple, 
Deleting the number variable from the printf statement in the lue.c file. The following error is displayed.
```
$ gcc lue.c -o lue
lue.c: In function ‘main’:
lue.c:5:88: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    5 | r P. Dent!\nThe answer to life the universe and everything is %d. \n");
      |                                                               ~^
      |                                                                |
      |                                                                int
```

But the code is compiled with the defect. Shows the compiled file in the hello world /hwd directory . 
```
$ dir
hwd.c  hwdc  hwd.cpp  hwdcpp  lue  lue.c  README.md
```

When executed the compiled file shows a value which is not the intended on of 42. 
```
$ ./lue
Hello, Arthur P. Dent!
The answer to life the universe and everything is -355009944. 
```

Compiling a separate executable with the missing number variable bug.
```
$ gcc lue.c -o lue_num_bug
lue.c: In function ‘main’:
lue.c:5:88: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
    5 | r P. Dent!\nThe answer to life the universe and everything is %d. \n");
      |                                                               ~^
      |                                                                |
      |                                                                int

$ ./lue_num_bug
Hello, Arthur P. Dent!
The answer to life the universe and everything is 483950264. 

$ ./lue_num_bug
Hello, Arthur P. Dent!
The answer to life the universe and everything is -1595666584. 

$ gcc lue.c -o lue

$ dir
hwd.c  hwdc  hwd.cpp  hwdcpp  lue  lue.c  lue_num_bug  README.md

$ ./lue
Hello, Arthur P. Dent!
The answer to life the universe and everything is 42. 
```

### make
Build system with make and Makefile script. Success.

```
$ make
gcc -c hwd.c -o hwd.o
gcc -o hola_mundo hwd.o

$ dir
hola_mundo  hwdc     hwdcpp  lue    lue_num_bug  README.md
hwd.c	    hwd.cpp  hwd.o   lue.c  Makefile

$ ls -l
total 104
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 15 11:59 hola_mundo
-rw-rw-r-- 1 york-earwaker york-earwaker    76 Dec 12 15:48 hwd.c
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 15:48 hwdc
-rw-rw-r-- 1 york-earwaker york-earwaker    76 Dec 12 15:49 hwd.cpp
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 15:49 hwdcpp
-rw-rw-r-- 1 york-earwaker york-earwaker  1496 Dec 15 11:59 hwd.o
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 17:20 lue
-rw-rw-r-- 1 york-earwaker york-earwaker   174 Dec 12 17:20 lue.c
-rwxrwxr-x 1 york-earwaker york-earwaker 15960 Dec 12 17:19 lue_num_bug
-rw-rw-r-- 1 york-earwaker york-earwaker   350 Dec 15 11:58 Makefile
-rw-rw-r-- 1 york-earwaker york-earwaker  3104 Dec 12 17:25 README.md

$ ./hola_mundo
Hello Ubuntu.
```

### Debugging, GDB
Using the -g option to produce debugging information for GDB .

```
$ gcc -g lue.c -o lue_debug

$ gdb lue_debug
GNU gdb (Ubuntu 15.0.50.20240403-0ubuntu1) 15.0.50.20240403-git
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from lue_debug...
(gdb) start
Temporary breakpoint 1 at 0x1155: file lue.c, line 4.
Starting program: /home/york-earwaker/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd/lue_debug 

This GDB supports auto-downloading debuginfo from the following URLs:
  <https://debuginfod.ubuntu.com>
Enable debuginfod for this session? (y or [n]) n
Debuginfod has been disabled.
To make this setting permanent, add 'set debuginfod enabled off' to .gdbinit.
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Temporary breakpoint 1, main () at lue.c:4
4	    int number = 42;
(gdb) print number
$1 = 32767
(gdb) next
5	    printf("Hello, Arthur P. Dent!\nThe answer to life the universe and everything is %d. \n", number);
(gdb) print number
$2 = 42
(gdb) quit
A debugging session is active.

	Inferior 1 [process 67123] will be killed.

Quit anyway? (y or n) y
```


## References

make
* 4.2 Rule Syntax, org [WS](https://www.gnu.org/software/make/manual/html_node/Rule-Syntax.html), make manual, GNU, 
* 10.5.3 Automatic Variables, org [WS](https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html)


