cmake_minimum_required(VERSION 3.9)
project(VideoMaker)

# Versioning
set (VERSION_MAJOR 0)
set (VERSION_MINOR 1)
set (VERSION_PATCH 0)

configure_file (
	"${PROJECT_SOURCE_DIR}/include/Config.h.in"
	"${PROJECT_BINARY_DIR}/Config.h"
)

#Used to find config files
include_directories("${PROJECT_BINARY_DIR}")

add_executable(Main src/main.cpp)
