
include_directories( ${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qt ${CMAKE_SOURCE_DIR}/smoke/kde )

set(srcdir ${CMAKE_CURRENT_SOURCE_DIR})
set(KDE_PREFIX ${CMAKE_INSTALL_PREFIX})
set(qt_includes ${QT_INCLUDE_DIR})
set(kde_includes ${KDE4_INCLUDE_DIR})
if(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "yes")
else(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "no")
endif(OPENGL_FOUND AND OPENGL_GLU_FOUND)
	
# for qtguess.pl
if (APPLE)
set(qtflags "-framework QtCore -framework QtGui")
else (APPLE)
set(qtflags "-lQtCore -lQtGui")
endif (APPLE)
FOREACH(filename ${QT_INCLUDES})
    set(all_includes "-I${filename} ${all_includes}")
ENDFOREACH(filename)


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


set(smokeokular_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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

# Needed to make QSqlRelationalDelegate compile
ADD_DEFINITIONS (-DQT_GUI_LIB)
IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

INCLUDE(${QT_USE_FILE})
# At this point, QT_LIBRARIES will contain a list of the found Qt Libs
# and QT_INCLUDES contains the directories of the found includes

FOREACH(filename ${QT_INCLUDES})
    set(all_includes "-I${filename} ${all_includes}")
ENDFOREACH(filename)

FOREACH(incname ${QT_INCLUDES})
    SET(qt_incs "'${incname}', ${qt_incs}")
ENDFOREACH(incname)

FOREACH(libname ${QT_LIBRARIES})
    set(all_libs "${libname} ${all_libs}")
ENDFOREACH(libname)

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY )

kde4_add_library(smokeokular SHARED ${smokeokular_LIB_SRCS})

target_link_libraries(smokeokular 
    ${QT_QTNETWORK_LIBRARY} 
    ${QT_QTSQL_LIBRARY} 
    ${QT_QTOPENGL_LIBRARY} 
    ${QT_QTXML_LIBRARY} 
    ${QT_QTSVG_LIBRARY} 
    ${QT_QTUITOOLS_LIBRARY} 
    ${QT_QTWEBKIT_LIBRARY} 
    ${QT_QT3SUPPORT_LIBRARY} 
    ${KDE4_KDECORE_LIBS} 
    ${KDE4_KDEUI_LIBS}
    ${KDE4_KIO_LIBS} 
    ${KDE4_KUTILS_LIBS}
    okularcore
    smokekde
    smokeqt )

set_target_properties(smokeokular PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokeokular DESTINATION ${LIB_INSTALL_DIR} )
install(FILES okular_smoke.h DESTINATION include/smoke/okular)
