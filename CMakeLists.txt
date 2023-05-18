cmake_minimum_required(VERSION 3.12)

project("JadeX Engine" VERSION 1.0.0)

file(GLOB_RECURSE SOURCES "Source/*.c")
set(LIBS "opengl32.dll")
include_directories("Include")
add_executable("JadeX" ${SOURCES})

target_link_libraries("JadeX" ${LIBS})
