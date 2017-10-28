cmake_minimum_required(VERSION 3.6)
project(oop)

set(CMAKE_CXX_STANDARD 14)

#file(GLOB_RECURSE SOURCE 3_sem/3/*.cpp)

set(HEADERS_DIR 3/headers)
set(SOURCE_FILES 3/src 3/src/main.cpp)

add_executable(
        ${PROJECT_NAME}
        ${SOURCE_FILES}
        ${SOURCE}
        ${HEADERS_DIR}
)
target_link_libraries(${PROJECT_NAME})