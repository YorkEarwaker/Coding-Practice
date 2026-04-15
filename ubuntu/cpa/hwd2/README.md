# Hello world hwd

Clang usage on ubuntu. 

## Output

### Use clang to compile
compile with clang from the cli

using C++ compiler wrapper
```
$ clang++ -o hwd src/hwd.cpp

$ ./hwd
```

or, using the clang driver itself and explicitly declaring the c++ language and the c++ standard library
```
$ clang -x c++ -lstdc++ -o hwd src/hwd.cpp

$ ./hwd
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

