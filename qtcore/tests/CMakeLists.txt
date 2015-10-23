cmake_minimum_required(VERSION 2.6)
project(target_test)
enable_language(CXX)
find_package(Qt5 COMPONENTS Core)
include(${QT_USE_FILE})
include_directories(${QT_INCLUDES})


# # set(test NONE)
# message(STATUS "Target test: ${test}")
# add_definitions(-DTEST_${test})
add_executable( target_test test.cpp )

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(target_test PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()
endif (WIN32)

target_link_libraries( target_test ${QT_LIBRARIES} )
