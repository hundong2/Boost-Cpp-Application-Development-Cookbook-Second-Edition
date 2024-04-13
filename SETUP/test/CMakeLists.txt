cmake_minimum_required(VERSION 3.28.3)
project(test)

# Set the C++ compiler to g++
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)

add_executable(main src/main.cpp)
add_executable(main2 src/main2.cpp)
add_executable(decltype src/decltype.cpp)
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -S")
#set_target_properties(decltype PROPERTIES COMPILE_FLAGS "-S")



