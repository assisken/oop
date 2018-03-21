set(SOURCE_FILES src src/main.cpp)
file(GLOB_RECURSE SOURCE src/*.cpp)

add_executable(
        ${PROJECT_NAME}
        ${HEADERS}
        ${SOURCE_FILES}
        ${SOURCE}
)

target_link_libraries(${PROJECT_NAME})