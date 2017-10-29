cmake_minimum_required(VERSION 3.6)
project(oop)

set(CMAKE_CXX_STANDARD 14)


set(HEADERS_DIR 3/headers)
set(SOURCE_FILES 3/src 3/src/main.cpp)
file(GLOB_RECURSE SOURCE 3/src/*.cpp)

add_executable(
        ${PROJECT_NAME}
        ${SOURCE_FILES}
        ${SOURCE}
        ${HEADERS_DIR}
)
target_link_libraries(${PROJECT_NAME})