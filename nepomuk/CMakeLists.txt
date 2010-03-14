find_package(Soprano REQUIRED)
find_package(Nepomuk REQUIRED)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${CMAKE_SOURCE_DIR}/smoke ${SOPRANO_INCLUDE_DIR} ${NEPOMUK_QUERY_INCLUDE_DIR} )

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

    COMMAND smokegen
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../kde/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/nepomuk_includes.h
    DEPENDS smokegen generator_smoke WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

set(smokenepomuk_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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
)

kde4_add_library(smokenepomuk SHARED ${smokenepomuk_LIB_SRCS})

target_link_libraries(smokenepomuk 
    ${NEPOMUK_LIBRARIES}
    ${SOPRANO_LIBRARIES}
    ${KDE4_KDECORE_LIBS}
    smokeqtgui
    smokeqtcore
)

set_target_properties(smokenepomuk PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokenepomuk DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/nepomuk_smoke.h DESTINATION include/smoke )

########### install files ###############
