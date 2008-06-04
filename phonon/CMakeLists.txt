
include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke  )

IF(NOT PERL_FOUND)
    FIND_PACKAGE(PERL REQUIRED)
ENDIF(NOT PERL_FOUND)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
                 ${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp

	COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
	DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl

	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/phonon )

set(smokephonon_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
		${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_11.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_12.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_13.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_14.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_15.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_16.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_17.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_18.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_19.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_20.cpp
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokephonon SHARED ${smokephonon_LIB_SRCS})

target_link_libraries(smokephonon smokeqt ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${QT_QTDBUS_LIBRARY} ${QT_QTXML_LIBRARY} ${QT_PHONON_LIBRARY})

set_target_properties(smokephonon PROPERTIES VERSION 2.0.0 SOVERSION 2 )

install(TARGETS smokephonon DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/phonon_smoke.h DESTINATION include/smoke)

FOREACH(incname ${QT_INCLUDES})
    SET(qt_incs "'${incname}', ${qt_incs}")
ENDFOREACH(incname)

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY)
