cmake_minimum_required( VERSION 3.7 )

project( LinkedListObjects )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )
set( source_dir "${PROJECT_SOURCE_DIR}/src/" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin )

file( GLOB source_files "${source_dir}/*.cpp" )

add_executable( LinkedListObjects ${source_files} )
