project(MBSSL)

add_subdirectory(frontend)
add_subdirectory(midend)

add_executable(MBSSL main.cpp)

target_link_libraries(MBSSL PUBLIC visitor parser ${ANTLRv4_LIBS})

target_link_directories(MBSSL PUBLIC ${ANTLRv4_LIBS_DIR})
