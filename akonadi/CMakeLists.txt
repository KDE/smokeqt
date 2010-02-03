FIND_PACKAGE(Akonadi REQUIRED)
FIND_PACKAGE(KdepimLibs REQUIRED)

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
         -I "${AKONADI_INCLUDE_DIR}" -- ${CMAKE_CURRENT_SOURCE_DIR}/akonadi_includes.h
    DEPENDS smokegen generator_smoke WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${KDEPIMLIBS_INCLUDE_DIRS} ${AKONADI_INCLUDE_DIR} ${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/akonadi )

set(smokeakonadi_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/x_2.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_3.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_4.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_5.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_6.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_7.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_8.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_9.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_10.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

kde4_add_library(smokeakonadi SHARED ${smokeakonadi_LIB_SRCS})

target_link_libraries(smokeakonadi 
    ${KDEPIMLIBS_AKONADI_LIBS} 
    ${KDEPIMLIBS_AKONADI_CONTACT_LIBS}
    ${KDEPIMLIBS_AKONADI_KABC_LIBS}
    ${KDEPIMLIBS_AKONADI_KMIME_LIBS}
    ${KDE4_KDECORE_LIBS}
    ${KDE4_KDEUI_LIBS}
    smokekdecore
    smokekdeui
    smokeqtcore )

set_target_properties(smokeakonadi PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokeakonadi DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/akonadi_smoke.h DESTINATION include/smoke )

########### install files ###############




