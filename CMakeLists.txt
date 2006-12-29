
#Laurent reuse configure.in.in
#message(STATUS "${CMAKE_CURRENT_SOURCE_DIR}: skipped subdir $(kde_build_libsmoke)")

#add_subdirectory(qt)
add_subdirectory(kde)

########### install files ###############

install( FILES  smoke.h DESTINATION ${INCLUDE_INSTALL_DIR} )



#original Makefile.am contents follow:

#SUBDIRS = $(kde_build_libsmoke)
#
#include_HEADERS = smoke.h
