cmake_minimum_required(VERSION 3.10)

project(ELIXIR C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(elixir

    src/main.c

    src/core/tensor.c
    src/core/tensor_ops.c
)