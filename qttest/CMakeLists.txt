
include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke  )

IF(NOT PERL_FOUND)
    FIND_PACKAGE(PERL REQUIRED)
ENDIF(NOT PERL_FOUND)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

	COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
	DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl

	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qttest )

set(smokeqttest_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokeqttest SHARED ${smokeqttest_LIB_SRCS})

target_link_libraries(smokeqttest smokeqt ${QT_QTCORE_LIBRARY} ${QT_QTTEST_LIBRARY})

set_target_properties(smokeqttest PROPERTIES VERSION 2.0.0 SOVERSION 2 )

install(TARGETS smokeqttest DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qttest_smoke.h DESTINATION include/smoke)

FOREACH(incname ${QT_INCLUDES})
    SET(qt_incs "'${incname}', ${qt_incs}")
ENDFOREACH(incname)

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY)
