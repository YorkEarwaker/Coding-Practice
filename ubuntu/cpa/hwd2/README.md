# Hello world hwd

Clang usage on ubuntu. 

## Output

### Use clang to compile
compile with clang from the cli

$ clang++ -o hwd src/hwd.cpp

$ ./hwd

### Use cmake to build
build with cmake from the cli using clang to compile, see CMakeLists.txt for build instructions

$ cmake -DCMAKE_CXX_COMPILER=clang++ -B build

$ ./build/hwd.o


