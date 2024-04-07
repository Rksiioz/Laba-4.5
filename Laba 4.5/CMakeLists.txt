cmake_minimum_required(VERSION 3.27)
project(Laba_4_5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_4_5 main.cpp
        Shape.h
        Circle.h
        Rectangle.h
        Trapezium.h
        Rectangle.cpp
        Trapezium.cpp
        Circle.cpp)
