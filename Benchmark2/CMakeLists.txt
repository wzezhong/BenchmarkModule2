cmake_minimum_required(VERSION 3.23)
project(Benchmark2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Benchmark2 main.cpp RandomMap.cpp RandomMap.h Node.h AStar.cpp AStar.h)
