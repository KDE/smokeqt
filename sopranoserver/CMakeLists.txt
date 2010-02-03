macro_log_feature(Soprano_FOUND "Soprano" "Soprano Libraries" "kdesupport" FALSE "" "Required to build Nepomuk.")
set(soprano_includes ${SOPRANO_INCLUDE_DIR})

include_directories( ${QT_INCLUDES} ${SOPRANO_INCLUDE_DIR} )

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

    COMMAND smokegen
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../qt/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -I "${SOPRANO_INCLUDE_DIR}" -- ${CMAKE_CURRENT_SOURCE_DIR}/soprano_includes.h
    DEPENDS smokegen generator_smoke WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/sopranoserver )

set(smokesopranoserver_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokesopranoserver SHARED ${smokesopranoserver_LIB_SRCS})

target_link_libraries(  smokesopranoserver
                            smokeqtcore
                            smokesoprano
                            ${QT_QTCORE_LIBRARY} 
                            sopranoserver 
                            ${SOPRANO_LIBRARIES} )

set_target_properties(smokesopranoserver PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokesopranoserver DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/sopranoserver_smoke.h DESTINATION include/smoke)
