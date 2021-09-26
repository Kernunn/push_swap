cmake_minimum_required(VERSION 3.17)
project(push_swap C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -L..")
include_directories(libft/includes)
add_executable(push_swap
        checker.c
        fill_stack.c
        read_instruction.c
        executing_instructions.c
        instruction1.c
        instruction2.c check_result.c check_result.h)

target_link_libraries(push_swap libft.a)
