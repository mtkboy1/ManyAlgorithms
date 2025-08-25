cmake_minimum_required(VERSION 3.10)
project(MyFunnyLibrary)

set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_MAKE_PROGRAM "C:/MinGW/bin/mingw32-make.exe")

add_executable(MyFunnyLibrary src/main.c 
src/sorts/BubbleSort.h src/sorts/BubbleSort.c 
src/sorts/CountSort.h src/sorts/CountSort.c 
src/sorts/QuickSort.h src/sorts/QuickSort.c
src/sorts/SelectionSort.h src/sorts/SelectionSort.c
src/Graph/search/Depth.c src/Graph/search/Depth.h
src/Graph/search/Width.c src/Graph/search/Width.h
src/structs/queue.c src/structs/queue.h
src/structs/stack.c src/structs/stack.h) 
include_directories(
    ${CMAKE_SOURCE_DIR}/src/Graph
    ${CMAKE_SOURCE_DIR}/src/structs
    ${CMAKE_SOURCE_DIR}/src/sorts
)