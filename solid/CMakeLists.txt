
include_directories( ${CMAKE_SOURCE_DIR}/smoke )

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
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../kdecore/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/solid_includes.h
    DEPENDS smokegen generator_smoke WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

set(smokesolid_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

kde4_add_library(smokesolid SHARED ${smokesolid_LIB_SRCS})

target_link_libraries(smokesolid 
    ${QT_QTCORE_LIBRARY} 
    ${QT_QTNETWORK_LIBRARY} 
    ${QT_QTGUI_LIBRARY} 
    ${QT_QTXML_LIBRARY} 
    ${QT_QTDBUS_LIBRARY} 
    ${KDE4_SOLID_LIBS}
    smokeqtcore
    smokeqtgui 
)

set_target_properties(smokesolid PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokesolid DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/solid_smoke.h DESTINATION include/smoke)
