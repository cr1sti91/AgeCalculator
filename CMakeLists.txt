cmake_minimum_required(VERSION 3.16)

project(AgeCalculator
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AgeCalculator main.cpp src/methods.cpp)
target_include_directories(AgeCalculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
