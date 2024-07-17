cmake_minimum_required(VERSION 3.27)
project(PoetiCLicense C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PoetiCLicense
        stack.c
        stack.h)
