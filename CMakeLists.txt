cmake_minimum_required(VERSION 3.12)

project("JadeX Engine" VERSION 1.0.0)

file(GLOB SOURCES "Source/*.c" "Source/*/*.c")

add_executable("JadeX" ${SOURCES})
include_directories("Include")