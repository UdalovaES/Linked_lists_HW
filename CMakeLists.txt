cmake_minimum_required(VERSION 3.23)
project(HW5_linked_lists)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW5_linked_lists
        main.cpp
        Node.cpp
        Node.h)
