cmake_minimum_required(VERSION 3.15)
project(NoProject)

add_executable(test_1859 test/sorting-the-sentence
                         src/sorting-the-sentence)
target_include_directories(test_1859 PRIVATE inc)

add_executable(test_2119 test/a-number-after-a-double-reversal
                        src/a-number-after-a-double-reversal)
target_include_directories(test_2119 PRIVATE inc)

# add_executable(test_yyy test/minimum-subsequence-in-non-increasing-order 
#                         src/minimum-subsequence-in-non-increasing-order.cpp)
# target_include_directories(test_yyy PRIVATE inc)

add_executable(test_1403 test/minimum-subsequence-in-non-increasing-order.cpp
                         src/minimum-subsequence-in-non-increasing-order.cpp)
target_include_directories(test_1403 PRIVATE inc)

add_executable(test_2248 test/intersection-of-multiple-arrays.cpp
                         src/intersection-of-multiple-arrays.cpp)
target_include_directories(test_2248 PRIVATE inc)

add_executable(test_2415 test/reverse-odd-levels-of-binary-tree.cpp
                         src/reverse-odd-levels-of-binary-tree.cpp)
target_include_directories(test_2415 PRIVATE inc)

if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-g -std=gnu++14 -Wall -Wextra -Wpedantic)
endif()