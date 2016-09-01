cmake_minimum_required(VERSION 2.8)

project(rtree)

set(RTREE_SRC_DIR CMAKE_CURRENT_SOURCE_DIR})
set(RTREE_LIB_DIR ${RTREE_SRC_DIR}/../lib)
set(RTREE_BIN_DIR ${RTREE_SRC_DIR}/../bin)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${RTREE_LIB_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${RTREE_LIB_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${RTREE_BIN_DIR})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})


add_subdirectory(rtree)
add_subdirectory(test)
