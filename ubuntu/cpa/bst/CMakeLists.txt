cmake_minimum_required(VERSION 3.10) # 3.20?
project(cpp-coding-practice LANGUAGES CXX)

# <todo: consider, verify, set the C++ standard version to compile to, >
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF) # use -std=c++11 instead of -std=gnu++11

# set output directories, simplest
# refactor to use targets
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin) # bin first, evaluation, works!
<todo: consider, determine are output directory names convention or part of CMAKE hard coded constants? >
# todo /../bin/lib   # libiraries      CMAKE_LIBRARY_OUTPUT_DIRECTIVE
# todo /../bin/arc   # archive         CMAKE_ARCHIVE_OUTPUT_DIRECTORY
# todo /../bin/dbg   # debug           CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/dbg
# todo /../bin/rls   # release         CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/rls
# todo /../bin/exe   # excutables?
# todo /../bin/tst   # test? probs not? 

add_executable(chapter_02.o
  src/org/eg/bst/ch_02/chapter_02.cpp
)


