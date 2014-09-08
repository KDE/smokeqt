include_directories( ${Qt5Xml_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR} )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 

    COMMAND ${SMOKE_GEN_BIN}
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -dm Q_STATIC_ASSERT
         -- ${CMAKE_CURRENT_SOURCE_DIR}/qtxml_includes.h
    DEPENDS ${SMOKE_GEN_BIN} "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtxml  )

set(smokeqt5xml_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqt5xml SHARED ${smokeqt5xml_LIB_SRCS})
add_library(smokeqt5xml SHARED ${smokeqt5xml_LIB_SRCS})

target_link_libraries(smokeqt5xml 
                        smokeqtcore 
                        Qt5::Core
                        Qt5::Xml )

set_target_properties(smokeqt5xml PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokeqt5xml LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqt5xml PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt5xml
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtxml_smoke.h DESTINATION include/smoke/qt5)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtxml.argnames.txt DESTINATION share/smoke/qt5)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtxml.typedefs.txt DESTINATION share/smoke/qt5)
