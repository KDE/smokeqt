include_directories( ${Qt5DBus_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR} )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

    COMMAND ${SMOKE_GEN_BIN}
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -dm Q_STATIC_ASSERT
         -- ${CMAKE_CURRENT_SOURCE_DIR}/qtdbus_includes.h
    DEPENDS ${SMOKE_GEN_BIN} "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtdbus  )

set(smokeqt5dbus_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqt5dbus SHARED ${smokeqt5dbus_LIB_SRCS})
add_library(smokeqt5dbus SHARED ${smokeqt5dbus_LIB_SRCS})

target_link_libraries(smokeqt5dbus smokeqt5core Qt5::Core Qt5::DBus )

set_target_properties(smokeqt5dbus PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokeqt5dbus LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if(CMAKE_COMPILER_IS_GNUCXX)
        set_target_properties(smokeqt5dbus PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt5dbus
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtdbus_smoke.h DESTINATION include/smoke/qt5)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtdbus.argnames.txt DESTINATION share/smoke/qt5)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtdbus.typedefs.txt DESTINATION share/smoke/qt5)
