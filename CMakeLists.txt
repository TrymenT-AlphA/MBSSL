cmake_minimum_required(VERSION 3.16)

include(${CMAKE_SOURCE_DIR}/cmake/NoInsourceBuild.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/ExportCompileCommands.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/DefaultCmakeBuildType.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/CompileWarnings.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

include_directories(${CMAKE_SOURCE_DIR}/third_party/ANTLRv4/include
                    ${CMAKE_SOURCE_DIR}/src)

set(ANTLRv4_LIBS_DIR ${CMAKE_SOURCE_DIR}/third_party/ANTLRv4/lib)
file(GLOB ANTLRv4_LIBS ${CMAKE_SOURCE_DIR}/third_party/ANTLRv4/lib/*)

find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_subdirectory(src)

project(formatting)
include(${CMAKE_SOURCE_DIR}/cmake/Formatting.cmake)
file(GLOB_RECURSE ALL_SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.[ch]"
     "${CMAKE_SOURCE_DIR}/src/*.[ch]pp")
clang_format(format ${ALL_SRC_FILES})
clang_format_check(format_check ${ALL_SRC_FILES})
