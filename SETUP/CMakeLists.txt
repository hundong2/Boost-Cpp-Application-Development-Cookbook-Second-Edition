cmake_minimum_required(VERSION 3.28.3)
project(myproject)
add_subdirectory(boost_test)
add_subdirectory(test)
# Set the C++ compiler to g++
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)


#check boost Library install 
find_package(Boost)

if(Boost_FOUND)
    # include path setting
    include_directories(${Boost_INCLUDE_DIRS})
endif()

