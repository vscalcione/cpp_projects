cmake_minimum_required(VERSION 3.15)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        cpp_project

        #exercises directory
        exercises/choice_month.cpp
        exercises/cube.cpp
        exercises/sum.cpp
        exercises/fibonacci_sequence.cpp
        exercises/pow.cpp

        #list directory
        list/list_sorting.cpp
        list/add_element_end_list.cpp
        list/verify_sorting_list.cpp
        list/add_element_list.cpp
)