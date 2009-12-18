find_package(Nepomuk REQUIRED)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${CMAKE_SOURCE_DIR}/smoke ${NEPOMUK_QUERY_INCLUDE_DIR} )

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 

    COMMAND generator
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../kde/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/attica_includes.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

set(smokeattica_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
)

kde4_add_library(smokeattica SHARED ${smokeattica_LIB_SRCS})

target_link_libraries(smokeattica 
    ${QT_QTCORE_LIBRARY}
    ${QT_QTNETWORK_LIBRARY}
    attica
    smokeqtcore
    smokeqtnetwork
)

set_target_properties(smokeattica PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokeattica DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/attica_smoke.h DESTINATION include/smoke )

########### install files ###############
