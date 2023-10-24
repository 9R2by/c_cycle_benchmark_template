cmake_minimum_required(VERSION 3.26)
project(standard_benchmark_code C)

set(CMAKE_C_STANDARD 99)
set(EXECUTABLE_OUTPUT_PATH ./target)
add_compile_options(-march=native -Wall -Wextra -Wpedantic)

add_executable(standard_benchmark_code main.c)
