IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${CMAKE_SOURCE_DIR}/smoke )

set(srcdir ${CMAKE_CURRENT_SOURCE_DIR})
set(KDE_PREFIX ${CMAKE_INSTALL_PREFIX})
set(qt_includes ${QT_INCLUDE_DIR})
set(kde_includes ${KDE4_INCLUDE_DIR})
if(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "yes")
else(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "no")
endif(OPENGL_FOUND AND OPENGL_GLU_FOUND)        

set(qtflags "-lQtCore -lQtGui")
FOREACH(filename ${QT_INCLUDES})
    set(all_includes "-I${filename} ${all_includes}")
ENDFOREACH(filename)

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY )

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 

                  COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )


set(smokenepomuk_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
                ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

# Needed to make QSqlRelationalDelegate compile
ADD_DEFINITIONS (-DQT_GUI_LIB)

kde4_add_library(smokenepomuk SHARED ${smokenepomuk_LIB_SRCS})

target_link_libraries(smokenepomuk 
    soprano
    nepomuk
    smokesoprano
    smokekde
    smokeqt )

set_target_properties(smokenepomuk PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokenepomuk DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/nepomuk_smoke.h DESTINATION include/smoke )

########### install files ###############




