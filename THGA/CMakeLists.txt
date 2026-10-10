cmake_minimum_required(VERSION 4.3)
project(THGA C)

set(CMAKE_C_STANDARD 23)

add_library(THGA STATIC library.c
        "Aufgabe 1.cpp"
        "Aufgabe 2.cpp"
        "cmake-build-debug/Aufgabe 3.cpp"
        "Aufgabe 3.cpp"
)
