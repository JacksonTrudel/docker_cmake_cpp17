cmake_minimum_required(VERSION 3.22.1)

project(cpp17_example
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)
