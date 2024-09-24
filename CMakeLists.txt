
cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)

project(TD01)

# TD01

add_executable(td01_ex01 src/td01_ex01.cpp)

add_executable(td01_ex02 src/td01_ex02.cpp)

# TD02

add_executable(td02_ex01 src/td02_ex01.cpp)

add_executable(td02_ex02 src/td02_ex02.cpp)

add_executable(td02_ex03 src/td02_ex03.cpp)

add_executable(td02_ex04 src/td02_ex04.cpp)

add_executable(td02_ex05 src/td02_ex05.cpp)

add_executable(td02_ex06 src/td02_ex06.cpp)

add_executable(td02_exbonus src/td02_exbonus.cpp)

# TD03

add_executable(td03_ex01 src/td03_ex01.cpp)

add_executable(td03_ex02 src/td03_ex02.cpp)

add_executable(td03_ex03 src/td03_ex03.cpp)

add_executable(td03_ex03_bis src/td03_ex03_bis.cpp)

add_executable(td03_ex04 src/td03_ex04.cpp)

add_executable(td03_ex05 src/td03_ex05.cpp)

add_executable(td03_ex06 src/td03_ex06.cpp)

add_executable(td03_exbonus src/td03_exbonus.cpp)

# file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS src/*)

# add_executable(${PROJECT_NAME} ${MY_SOURCES})