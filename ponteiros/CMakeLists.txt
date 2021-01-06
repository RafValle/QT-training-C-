cmake_minimum_required(VERSION 3.5)

project(aula1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LAB_SRC
    main.cpp
    compra.cpp
    )

add_executable(aula1 main.cpp compra.cpp)
