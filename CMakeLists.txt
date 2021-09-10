cmake_minimum_required(VERSION 3.20)
project(Modern_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(Modern_cpp main.cpp polymorphism/Shape.cpp headers/Shape.h polymorphism/Rectangle.cpp headers/Rectangle.h polymorphism/Square.cpp headers/Square.h)
