cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "D:\\dev\\Mingw64\\bin\\g++.exe")

project(forge_base VERSION 0.1.0 LANGUAGES CXX)

add_library(forge_base INTERFACE)
target_include_directories(forge_base INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/Source/Public)