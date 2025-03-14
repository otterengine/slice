cmake_minimum_required(VERSION 3.10)
project(otter_slice)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_EXTENSIONS OFF)

add_library(otter_slice INTERFACE)

target_include_directories(otter_slice INTERFACE include)
