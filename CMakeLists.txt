CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)

INCLUDE_DIRECTORIES( "${PROJECT_SOURCE_DIR}/include")

ADD_DEFINITIONS( -std=c++11 )

add_library( basicStat SHARED
include/basicStat.hpp
src/basicStat.cpp
)

ADD_EXECUTABLE( code1 src/code1.cpp )
target_link_libraries( code1 basicStat)

