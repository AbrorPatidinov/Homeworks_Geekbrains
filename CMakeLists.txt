cmake_minimum_required(VERSION 3.27)
project(Homeworks_Geekbrains C)

set(CMAKE_C_STANDARD 23)

add_executable(Homeworks_Geekbrains src/main.c
        includes/additional.h
        includes/seminar_1.h
        src/seminar_1.c
        includes/seminar_2.h
        src/seminar_2.c
        includes/seminar_3.h
        src/seminar_3.c
        includes/seminar_4.h
        src/seminar_4.c)
