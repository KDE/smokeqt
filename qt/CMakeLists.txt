
include(FindQScintilla)
include(FindQwt)

include_directories( ${QT_INCLUDES}  ${CMAKE_CURRENT_SOURCE_DIR}/../ )

if(QSCINTILLA_FOUND)
    include_directories( ${QSCINTILLA_INCLUDE_DIR} )
endif(QSCINTILLA_FOUND)

if(QWT_FOUND)
    include_directories( ${QWT_INCLUDE_DIR} )
endif(QWT_FOUND)

IF(QT_QTDBUS_FOUND)
    SET(QTDBUS_LIBRARY QtDBus)
ENDIF(QT_QTDBUS_FOUND)

# for qtguess.pl
set(qt_test_threshold 10)

FOREACH(filename ${QT_INCLUDES})
    set(all_includes "-I${filename} ${all_includes}")
ENDFOREACH(filename)

FOREACH(libname ${QT_QTCORE_LIBRARY})
    set(all_libs "${libname} ${all_libs}")
ENDFOREACH(libname)

FOREACH(libname ${QT_QTGUI_LIBRARY})
    set(all_libs "${libname} ${all_libs}")
ENDFOREACH(libname)

configure_file(qtguess.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/qtguess.pl @ONLY)
configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY )

# macro is defined in qt-copy/src/qbase.pri but couldn't be found by qtguess, so I append it manually
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/qtdefines "QT_NO_CAST_TO_ASCII\n")

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

                  COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/qtguess.pl
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/qtguess.pl

                  COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl

                  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qt  )

set(smokeqt_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
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

# kde4_add_library(smokeqt SHARED ${smokeqt_LIB_SRCS})
add_library(smokeqt SHARED ${smokeqt_LIB_SRCS})

target_link_libraries(smokeqt ${QT_QTCORE_LIBRARY} QtSvg QtGui QtNetwork QtSql QtOpenGL QtXml QtUiTools ${QTDBUS_LIBRARY} ${QSCINTILLA_LIBRARIES} ${QWT_LIBRARIES} )

set_target_properties(smokeqt PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokeqt DESTINATION ${INSTALL_DIR}/lib )

########### install files ###############




#original Makefile.am contents follow:

#lib_LTLIBRARIES = libsmokeqt.la
#
## set the include path for X, qt and KDE
#INCLUDES         = -I$(srcdir)/.. $(all_includes) -I$(qt_includes)/QtUiTools \
#                   -I$(qt_includes)/QtDBus
#
#EXTRA_DIST=generate.pl.in qtguess.pl.in qt_smoke.h Makefile.am
#
## the library search path. 
#libsmokeqt_la_LDFLAGS = -version-info 2:0:0 -no-undefined $(all_libraries) $(GLINC)
#
## the libraries to link against.
#libsmokeqt_la_LIBADD   = $(LIB_QTCORE) $(LIB_QTGUI) $(LIB_QTNETWORK) \
#						$(LIB_QTOPENGL) $(LIB_QTSQL) $(LIB_QTCORE) $(LIB_QTXML) $(LIB_QTSVG) \
#						$(GLLIB) $(LIBQSCINTILLA) \
#						-lQtSvg -lQtUiTools $(LIBQTDBUS) $(LIBQWT)
#
#x_sources = x_1.cpp x_2.cpp x_3.cpp x_4.cpp x_5.cpp x_6.cpp x_7.cpp \
#   x_8.cpp x_9.cpp x_10.cpp x_11.cpp x_12.cpp x_13.cpp x_14.cpp x_15.cpp \
#   x_16.cpp x_17.cpp x_18.cpp x_19.cpp x_20.cpp
#
## which sources should be compiled for perlqtkde
#libsmokeqt_la_SOURCES = smokedata.cpp $(x_sources)
#
#$(x_sources) smokedata.cpp:
#	perl generate.pl
#
#CLEANFILES = $(libsmokeqt_la_SOURCES)
