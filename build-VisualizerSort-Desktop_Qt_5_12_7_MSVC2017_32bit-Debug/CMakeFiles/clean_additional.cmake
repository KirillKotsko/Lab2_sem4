# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\VisualizerSort_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VisualizerSort_autogen.dir\\ParseCache.txt"
  "VisualizerSort_autogen"
  )
endif()
