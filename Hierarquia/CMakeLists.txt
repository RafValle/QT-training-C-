cmake_minimum_required(VERSION 3.5)

project(aula3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aula3 main.cpp
                     iproduto.cpp
                     produtoeletronico.cpp
                     produtoalimenticio.cpp
                     iimposto.cpp
                     ipi.cpp
                     icms.cpp)
