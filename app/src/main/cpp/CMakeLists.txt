cmake_minimum_required(VERSION 3.22.1)
project(core)

add_library(core SHARED core.cpp)

find_library(log-lib log)
target_link_libraries(core ${log-lib})
