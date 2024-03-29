cmake_minimum_required(VERSION 3.28.3)
project(test)

# Set the C++ compiler to g++
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)
add_executable(main main.cpp)


#check boost Library install 
find_package(Boost)

if(Boost_FOUND)
    # include path setting
    include_directories(${Boost_INCLUDE_DIRS})
endif()

