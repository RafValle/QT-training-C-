cmake_minimum_required(VERSION 3.5)

project(aula2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS -fno-elide-constructors)

set(PROJECT_SRC
    main.cpp
    compra.cpp
    )

add_executable(aula2 main.cpp compra.cpp)
