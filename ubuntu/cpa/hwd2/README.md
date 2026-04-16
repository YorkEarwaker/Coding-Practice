# Hello world hwd

Clang usage on ubuntu. 

## Output

### Use clang to compile
compile with clang from the cli

compile C++ code using clang C++ compiler wrapper
```
$ clang++ -o hwd src/hwd.cpp

$ ./hwd
```

or, using the clang driver itself and explicitly declaring the c++ language and the c++ standard library
```
$ clang -x c++ -lstdc++ -o hwd src/hwd.cpp

$ ./hwd
```

compile C code using the clang C - driver?
* <info: hello world programme as per Kerrnigham & Ritchie - The C Programming Language 2nd Ed, >
* <todo: consider, confirm driver used in this instance>
```
2$ clang -o hwd src/hwd-kr.c
src/hwd-kr.c:5:1: error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
    5 | main () 
      | ^
      | int
1 error generated.
```

compile C code using the clang C - driver?
* <info: int added to the, hello world programme as per Kerrnigham & Ritchie - The C Programming Language 2nd Ed, >
```
$ clang -o hwd src/hwd.c

$ ./hwd
hello, world
```

### Use cmake to build
build with cmake from the cli using clang to compile, see CMakeLists.txt for build instructions

In this example .o extension was added to the binary file, this is decorative (aesthetics) and informative, indicating it is a binary .o object. 
```
$ cmake -DCMAKE_CXX_COMPILER=clang++ -B build

$ cmake --build build

$ ./build/hwd.o
```

## References

* Develop C and C++ with Clang on Ubuntu [WS](https://documentation.ubuntu.com/ubuntu-for-developers/tutorials/clang-use/), Ubuntu, docs, 

