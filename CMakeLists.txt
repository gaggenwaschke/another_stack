cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(another_stack LANGUAGES CXX VERSION 0.1.0)

set_property(GLOBAL PROPERTY CXX_STANDARD 20)

add_library(another_stack INTERFACE)
target_include_directories(another_stack INTERFACE src)

add_subdirectory(unit_test)
