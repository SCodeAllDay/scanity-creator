cmake_minimum_required(VERSION 3.15)
project(creator)

set(BOOST_ROOT C:/boost_1_83_0)

set(mod1_src
    ${CMAKE_SOURCE_DIR}/mod1.cpp
)

add_library(mod1 MODULE ${mod1_src})

target_include_directories(mod1 PRIVATE
    ${BOOST_ROOT}
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/../output/mods)

add_custom_target(copy_mod1_dll ALL
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:mod1> ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    DEPENDS mod1
)
