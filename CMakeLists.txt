cmake_minimum_required(VERSION 3.6)
project(oop)

set(CMAKE_CXX_STANDARD 14)


set(HEADERS_DIR 5/headers)
set(SOURCE_FILES 5/src 5/src/main.cpp)
file(GLOB_RECURSE SOURCE 5/src/*.cpp)

add_executable(
        ${PROJECT_NAME}
        ${SOURCE_FILES}
        ${SOURCE}
        ${HEADERS_DIR}
)
target_link_libraries(${PROJECT_NAME})