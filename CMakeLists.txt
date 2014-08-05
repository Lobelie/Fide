cmake_minimum_required(VERSION 2.6)

project(Fide)

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

#define
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -std=gnu++0x")

include_directories(include)

#include file
file(
	GLOB_RECURSE
	include_files
	include/*
)

#src file
file(
	GLOB_RECURSE
	source_files
	src/*
)

#client
set(fide_sources_files ${source_files})
add_executable(
        Fide
        
        ${include_files}
        ${fide_sources_files}
)
target_link_libraries(Fide ${QT_LIBRARIES})
