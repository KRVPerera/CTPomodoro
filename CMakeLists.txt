cmake_minimum_required(VERSION 3.22)
project(CTPomodoro)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/TermOx)

add_executable(CTPomodoro main.cpp)

target_link_libraries(${PROJECT_NAME} TermOx)

