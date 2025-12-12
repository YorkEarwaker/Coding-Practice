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

### Compiling, 
Source code to machine code
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
