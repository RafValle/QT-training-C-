cmake_minimum_required(VERSION 3.5)

project(lab3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab3
    main.cpp
    iproduto.cpp
    iimposto.cpp
    produtoeletronico.cpp
    produtoalimenticio.cpp
    icms.cpp
    ipi.cpp
   )
