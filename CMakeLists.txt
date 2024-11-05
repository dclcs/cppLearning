cmake_minimum_required(VERSION 3.29)
project(cppLearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(cppLearning main.cpp
        01_explicit/TestExplicit.cpp
        01_explicit/TestExplicit.h
        02_unique_ptr/TestUniquePtr.cpp
        02_unique_ptr/TestUniquePtr.h)
