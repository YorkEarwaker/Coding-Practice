cmake_minimum_required(VERSION 3.10) # 3.20?
project(cpp-coding-practice LANGUAGES CXX)

# <todo: consider, verify, set the C++ standard version to compile to, >
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF) # use -std=c++11 instead of -std=gnu++11

# set output directories, simplest
# refactor to use targets
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin) # bin first, 
# todo libiraries
# todo archive

add_executable(chapter_02.o
  src/org/eg/bst/ch_02/chapter_02.cpp
)


