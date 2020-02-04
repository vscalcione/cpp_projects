cmake_minimum_required(VERSION 3.15)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        cpp_project

                # exercises directory
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
                exercises/product.cpp
                exercises/quozient.cpp
                exercises/random_values_generator.cpp
                exercises/scientific_calculator.cpp
                exercises/scientific_calculator_1.cpp
                exercises/square.cpp
                exercises/sum.cpp
                exercises/supermarket_checkout.cpp

                # matrix directory
                # pointer_lists directory
                # pointers directory
                # recursion directory
                # strings directory
                # text_files directory

                # vectors directory
                vectors/array_disorder.cpp
                vectors/array_disorder_1.cpp
                vectors/array_fusion.cpp
                vectors/average_4_arrays.cpp
                vectors/bubble_sorting_array.cpp
                vectors/bubble_sorting_array_1.cpp
                vectors/loading_printing_array.cpp
                vectors/loading_printing_array_1.cpp
                vectors/max_min_search.cpp
                vectors/max_min_value.cpp

)