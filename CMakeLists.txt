cmake_minimum_required(VERSION 3.8)
project(my-leetcode-cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        common.h
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
        L011/use_solution011.h
        L015/solution015.cpp
        L015/solution015.h
        L015/use_solution015.h
        L016/solution016.cpp
        L016/solution016.h
        L016/use_solution016.h
        L017/solution017.cpp
        L017/solution017.h
        L017/use_solution017.h
        L018/solution018.cpp
        L018/solution018.h
        L018/use_solution018.h
        L019/solution019.cpp
        L019/solution019.h
        L019/use_solution019.h
        L020/solution020.cpp
        L020/solution020.h
        L020/use_solution020.h
        L021/solution021.cpp
        L021/solution021.h
        L021/use_solution021.h
        L022/solution022.cpp
        L022/solution022.h
        L022/use_solution022.h
        L023/solution023.cpp
        L023/solution023.h
        L023/use_solution023.h
        L024/solution024.cpp
        L024/solution024.h
        L024/use_solution024.h
        L025/solution025.cpp
        L025/solution025.h
        L025/use_solution025.h
        L070/solution070.h
        L070/solution070.cpp
        L070/use_solution070.h L144/solution144.cpp L144/solution144.h L144/use_solution144.h L026/solution026.cpp L026/solution026.h L026/use_solution026.h L589/solution589.h L589/use_solution589.h)

add_executable(leetcode_refactor ${SOURCE_FILES})