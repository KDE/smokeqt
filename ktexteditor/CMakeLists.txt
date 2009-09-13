
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

    COMMAND generator
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../kde/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/ktexteditor_includes.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )


set(smokektexteditor_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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

kde4_add_library(smokektexteditor SHARED ${smokektexteditor_LIB_SRCS})

target_link_libraries(smokektexteditor 
    ${QT_QTNETWORK_LIBRARY} 
    ${QT_QTSQL_LIBRARY} 
    ${QT_QTOPENGL_LIBRARY} 
    ${QT_QTXML_LIBRARY} 
    ${QT_QTSVG_LIBRARY} 
    ${QT_QTUITOOLS_LIBRARY} 
    ${QT_QT3SUPPORT_LIBRARY} 
    ${KDE4_KDECORE_LIBS} 
    ${KDE4_KDEUI_LIBS}
    ${KDE4_KIO_LIBS} 
    ${KDE4_KDE3SUPPORT_LIBS}
    ${KDE4_KTEXTEDITOR_LIBS}
    ${KDE4_KPARTS_LIBS}
    smokekde
    smokeqt )

set_target_properties(smokektexteditor PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokektexteditor DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/ktexteditor_smoke.h DESTINATION include/smoke )
