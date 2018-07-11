cmake_minimum_required(VERSION 3.7)

project(LinkedListObjects)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(
	LinkedListObjects
	src/main.cpp
	src/Application.cpp
	src/Object.cpp
	src/Rectangle.cpp
)
