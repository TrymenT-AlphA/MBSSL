if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
  message(
    STATUS
      "CMAKE_EXPORT_COMPILE_COMMANDS defaulting to ${CMAKE_EXPORT_COMPILE_COMMANDS}"
  )
endif()
