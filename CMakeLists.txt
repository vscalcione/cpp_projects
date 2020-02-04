cmake_minimum_required(VERSION 3.15)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        cpp_project

        exercises/battleship.cpp
        exercises/choice_month.cpp
        exercises/cube.cpp
        exercises/dade_game.cpp
        exercises/difference.cpp
        exercises/factorial.cpp
        exercises/guess_the_number.cpp
        exercises/guess_the_word.cpp
        exercises/pair_dispair_calculate.cpp
        exercises/parkimeter.cpp
        exercises/phonebook.cpp
        exercises/pow.cpp

        matrix/transposed_matrix.cpp

)