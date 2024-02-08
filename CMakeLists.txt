cmake_minimum_required(VERSION 3.27)
project(Homeworks_Geekbrains C)

set(CMAKE_C_STANDARD 23)

add_executable(Homeworks_Geekbrains src/main.c
        includes/homeworks_structure.h
        src/homeworks_structure.c
        includes/additional.h)
