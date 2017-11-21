cmake_minimum_required(VERSION 3.6)
project(oop)

set(CMAKE_CXX_STANDARD 14)


set(HEADERS_DIR 4/headers)
set(SOURCE_FILES 4/src 4/src/main.cpp)
file(GLOB_RECURSE SOURCE 4/src/*.cpp)

add_executable(
        ${PROJECT_NAME}
        ${SOURCE_FILES}
        ${SOURCE}
        ${HEADERS_DIR}
)
target_link_libraries(${PROJECT_NAME})