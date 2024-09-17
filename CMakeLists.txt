cmake_minimum_required(VERSION 3.25)
include_directories(/usr/local/mysql-8.4.0-macos14-arm64/include)
link_directories(/usr/local/mysql-8.4.0-macos14-arm64/lib)


project(untitled)

set(CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp
        test.cpp
        )
