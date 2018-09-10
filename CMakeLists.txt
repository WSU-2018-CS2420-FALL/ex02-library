cmake_minimum_required(VERSION 3.10)
project(library)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main
        src/main.cpp
        src/book.cpp
        src/audio.cpp
        src/print.cpp
)
add_executable(tester
        test/tester.cpp
        src/book.cpp
        src/audio.cpp
        src/print.cpp
)