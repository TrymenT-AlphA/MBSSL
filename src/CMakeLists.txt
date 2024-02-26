cmake_minimum_required(VERSION 3.16)

project(MBSSL)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

aux_source_directory(. SRC_FILES)

add_subdirectory("frontend")

add_executable(MBSSL ${SRC_FILES})

target_link_libraries(MBSSL PUBLIC visitor parser ${THIRD_PARTY_LIBS})
