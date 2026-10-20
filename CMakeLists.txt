cmake_minimum_required(VERSION 3.15)

project(native_dsa LANGUAGES CXX)

find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(_core
    src/native_dsa/_core.cpp
)

target_compile_features(_core PRIVATE cxx_std_17)

install(TARGETS _core
    LIBRARY DESTINATION native_dsa
    RUNTIME DESTINATION native_dsa
)