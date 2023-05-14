cmake_minimum_required(VERSION 3.12)

project("JadeX Engine" VERSION 1.0.0)

file(GLOB_RECURSE SOURCES "Source/*.c")

add_executable("JadeX" ${SOURCES})
include_directories("Include")