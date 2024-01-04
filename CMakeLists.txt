cmake_minimum_required(VERSION 3.10)

project(CalculatorProject)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB SOURCE_FILES ${SOURCE_DIR}/*.cpp)

set(OBJECT_DIR ${CMAKE_CURRENT_BINARY_DIR}/obj)
set(EXECUTABLE_DIR ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_library(calculator_lib STATIC ${SOURCE_FILES})

add_executable(calculator ${SOURCE_DIR}/main.cpp)

target_link_libraries(calculator PRIVATE calculator_lib)

set_target_properties(calculator_lib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${OBJECT_DIR})
set_target_properties(calculator PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_DIR})

add_custom_target(run
    COMMAND calculator
    DEPENDS calculator
    WORKING_DIRECTORY ${EXECUTABLE_DIR}
)

if(CMAKE_GENERATOR STREQUAL "Ninja")
    add_compile_options(-Wall -Wextra -std=c++11)
endif()
