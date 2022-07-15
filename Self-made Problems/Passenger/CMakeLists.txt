cmake_minimum_required(VERSION 3.21)
project(Passenger)

set(CMAKE_CXX_STANDARD 14)

add_executable(Passenger
        checker-1.cpp
        Checker.cpp
        Solution.cpp
        "test cases.cpp"
        Validator.cpp)
