if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "RelWithDebInfo")
  message(STATUS "CMAKE_BUILD_TYPE defaulting to ${CMAKE_BUILD_TYPE}")
endif()
