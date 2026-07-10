cmake_minimum_required(VERSION 3.10)


set(DAY Day8)
project (MyProject)

add_executable(${DAY}_run "../src/${DAY}/${DAY}.cc")
execute_process(
    COMMAND mv ${DAY}_run ../src/${DAY}/${DAY}
    OUTPUT_VARIABLE Output 
)

message(STATUS "Compile Successful.")