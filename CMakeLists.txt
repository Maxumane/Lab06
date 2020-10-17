cmake_minimum_required(VERSION 3.17)
project(Lab06)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab06 main.cpp abstract_operation.hpp operation.hpp addition_operation.hpp multiplication_operation.hpp division_operation.hpp subtraction_operation.hpp rpn_calculator.cpp rpn_calculator.hpp)