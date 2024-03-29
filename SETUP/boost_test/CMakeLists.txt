cmake_minimum_required(VERSION 3.28.3)
project(boost_test)

set(CMAKE_CXX_STANDARD 14)

#check boost Library install 
find_package(Boost)

if(Boost_FOUND)
    # include path setting
    include_directories(${Boost_INCLUDE_DIRS})
endif()
add_executable(boost_test main.cpp)
