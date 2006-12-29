
include_directories( ${KDE4_INCLUDE_DIR} ${QT_INCLUDES}  )

set(srcdir ${CMAKE_CURRENT_SOURCE_DIR})
set(KDE_PREFIX ${CMAKE_INSTALL_PREFIX})
set(qt_includes ${QT_INCLUDES})
set(kde_includes ${KDE4_INCLUDE_DIR})
if(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "yes")
else(OPENGL_FOUND AND OPENGL_GLU_FOUND)
   set(KDE_HAVE_GL "no")
endif(OPENGL_FOUND AND OPENGL_GLU_FOUND)	

configure_file(generate.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/generate.pl @ONLY )
#Laurent readd it.
#configure_file(qtguess.pl.cmake ${CMAKE_CURRENT_BINARY_DIR}/qtguess.pl @ONLY)

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp
                  COMMAND ${PERL_EXECUTABLE} ARGS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/generate.pl
                  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})


set(smokekde_LIB_SRCS smokedata.cpp )#x_1.cpp x_2.cpp x_3.cpp x_4.cpp x_5.cpp x_6.cpp x_7.cpp x_8.cpp x_9.cpp x_10.cpp x_11.cpp x_12.cpp x_13.cpp x_14.cpp x_15.cpp x_16.cpp x_17.cpp x_18.cpp x_19.cpp x_20.cpp ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp)

kde4_automoc(${smokekde_LIB_SRCS})

kde4_add_library(smokekde SHARED ${smokekde_LIB_SRCS})

target_link_libraries(smokekde  ${KDE4_KDECORE_LIBS} QtSvg QtUiTools ${KDE4_KHTML_LIBS} kjs fontconfig ${KDE4_KUTILS_LIBS} ${KDE4_KDEPRINT_LIBS} )

set_target_properties(smokekde PROPERTIES VERSION 2.0.0 SOVERSION 2 )
install(TARGETS smokekde DESTINATION ${LIB_INSTALL_DIR} )


########### install files ###############




#original Makefile.am contents follow:

#
#
#lib_LTLIBRARIES = libsmokekde.la
#
## set the include path for X, qt and KDE
#INCLUDES         = -I$(srcdir)/.. $(all_includes) -I$(qt_includes)/QtUiTools \
#                   -I$(qt_includes)/QtDBus
#
#EXTRA_DIST=generate.pl.in qtguess.pl.in qt_smoke.h Makefile.am
#
## the library search path. 
#libsmokekde_la_LDFLAGS = -version-info 2:0:0 -no-undefined $(all_libraries) $(GLINC) $(KDE_RPATH)
#
## the libraries to link against.
#libsmokekde_la_LIBADD   = $(LIB_QTCORE) $(LIB_QTGUI) $(LIB_QTNETWORK) \
#						$(LIB_QTOPENGL) $(LIB_QTSQL) $(LIB_QTCORE) $(LIB_QTXML) $(LIB_QTSVG) \
#						$(GLLIB) $(LIBQSCINTILLA) \
#						-lQtSvg -lQtUiTools $(LIBQTDBUS) \
#						$(LIB_KHTML) -lkjs -lfontconfig $(LIB_KMDI) $(LIB_KNS) $(LIB_KSPELL) \
#						$(LIB_KUTILS) $(LIB_KDEPRINT)
#
#x_sources = x_1.cpp x_2.cpp x_3.cpp x_4.cpp x_5.cpp x_6.cpp x_7.cpp \
#   x_8.cpp x_9.cpp x_10.cpp x_11.cpp x_12.cpp x_13.cpp x_14.cpp x_15.cpp \
#   x_16.cpp x_17.cpp x_18.cpp x_19.cpp x_20.cpp
#
## which sources should be compiled for perlqtkde
#libsmokekde_la_SOURCES = smokedata.cpp $(x_sources)
#
#$(x_sources) smokedata.cpp:
#	perl generate.pl
#
#CLEANFILES = $(libsmokekde_la_SOURCES)
#
#
#
#
#
