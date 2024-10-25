# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EJ4A_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EJ4A_autogen.dir\\ParseCache.txt"
  "EJ4A_autogen"
  )
endif()
