# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EJ1PROP_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EJ1PROP_autogen.dir\\ParseCache.txt"
  "EJ1PROP_autogen"
  )
endif()
