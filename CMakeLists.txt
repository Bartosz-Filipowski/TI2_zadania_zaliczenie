cmake_minimum_required(VERSION 3.31)
project(tablice C)

set(CMAKE_C_STANDARD 11)

add_executable(tablice main.c
        tablice.h
        tablice.c)
