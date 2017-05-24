cmake_minimum_required(VERSION 3.5)

project(issue_386)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(
    -Wall -Wextra
    -pedantic
    $<$<CONFIG:Debug>:-Werror>
    )
find_package(Boost REQUIRED COMPONENTS system)

add_executable(${PROJECT_NAME} "test.cpp")
target_include_directories(${PROJECT_NAME} SYSTEM
    PRIVATE Beast/include)
target_link_libraries(${PROJECT_NAME}
    PRIVATE Boost::system)


