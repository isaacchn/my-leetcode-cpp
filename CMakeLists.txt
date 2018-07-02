cmake_minimum_required(VERSION 3.8)
project(my-leetcode-cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        L001/solution001.h
        L001/solution001.cpp
        L001/use_solution001.h
        L002/solution002.cpp
        L002/solution002.h
        L002/use_solution002.h
        L003/solution003.cpp
        L003/solution003.h
        L003/use_solution003.h
        L004/solution004.cpp
        L004/solution004.h
        L004/use_solution004.h
        L005/solution005.cpp
        L005/solution005.h
        L005/use_solution005.h
        L006/solution006.cpp
        L006/solution006.h
        L006/use_solution006.h
        L007/solution007.cpp
        L007/solution007.h
        L007/use_solution007.h
        L009/solution009.cpp
        L009/solution009.h
        L009/use_solution009.h
        L010/solution010.cpp
        L010/solution010.h
        L010/use_solution010.h
        L011/solution011.cpp
        L011/solution011.h
        L011/use_solution011.h L015/solution015.cpp L015/solution015.h L015/use_solution015.h)
add_executable(leetcode_refactor ${SOURCE_FILES})