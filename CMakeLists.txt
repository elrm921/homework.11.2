cmake_minimum_required(VERSION 3.22.0)

project(Leave)
add_executable(Leaver main.cpp)
add_library(LeaverDynamicLib SHARED leaver.cpp leaver.h)
target_link_libraries(Leaver LeaverDynamicLib)