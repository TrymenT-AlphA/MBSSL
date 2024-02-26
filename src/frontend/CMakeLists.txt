cmake_minimum_required(VERSION 3.16)

project(frontend)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

aux_source_directory(. FRONTEND_SRC_FILES)

add_subdirectory("parser")
add_subdirectory("visitor")
