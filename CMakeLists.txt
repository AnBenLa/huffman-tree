cmake_minimum_required(VERSION 3.10)
project(huffman)

set(CMAKE_CXX_STANDARD 17)

add_executable(huffman main.cpp node.h Tree.cpp Tree.h)