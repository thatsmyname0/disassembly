cmake_minimum_required(VERSION 3.10)

project(disassembly)

add_executable(test src/utils.cpp src/instruction.cpp src/mips.cpp test/test.cpp)