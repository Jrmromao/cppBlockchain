cmake_minimum_required(VERSION 3.10)
project(Blockchain_Cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(Blockchain_Cpp main.cpp Block.h Blockchain.h SHA256.cpp SHA256.h)