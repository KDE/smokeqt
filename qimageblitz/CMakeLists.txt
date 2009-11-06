if (NOT QIMAGEBLITZ_FOUND)
    find_package(QImageBlitz REQUIRED)
endif (NOT QIMAGEBLITZ_FOUND)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp

    COMMAND generator
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../qt/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -I ${QIMAGEBLITZ_INCLUDES} -dm QIMAGEBLITZ_EXPORT -- ${CMAKE_CURRENT_SOURCE_DIR}/qimageblitz_includes.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories( ${QT_INCLUDES} ${QIMAGEBLITZ_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke  )

set(smokeqimageblitz_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
	${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokeqimageblitz SHARED ${smokeqimageblitz_LIB_SRCS})

target_link_libraries(smokeqimageblitz smokeqt ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${QIMAGEBLITZ_LIBRARIES})

set_target_properties(smokeqimageblitz PROPERTIES VERSION 2.1.0 SOVERSION 2.1 )

install(TARGETS smokeqimageblitz DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qimageblitz_smoke.h DESTINATION include/smoke )
