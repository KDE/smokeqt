OPTION(ENABLE_SMOKE "build Smoke" ON)
OPTION(ENABLE_SMOKEQSCI "build SmokeQsci" OFF)
OPTION(ENABLE_SMOKEKDE "build SmokeKDE" ON)

set(SMOKE_ENABLED "no")
if(ENABLE_SMOKE OR ENABLE_SMOKEQSCI OR ENABLE_SMOKEKDE)
    add_subdirectory(qt)
    set(SMOKE_ENABLED "yes - Qt")

    if(ENABLE_SMOKEQSCI)
        add_subdirectory(qsci)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QScintilla2")
    endif(ENABLE_SMOKEQSCI)

    if(ENABLE_SMOKEKDE)
        add_subdirectory(kde)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDE")
    endif(ENABLE_SMOKEKDE)

endif(ENABLE_SMOKE OR ENABLE_SMOKEQSCI OR ENABLE_SMOKEKDE)

message(STATUS "Build Smoke... " ${SMOKE_ENABLED})

########### install files ###############

# KDE specific
#install( FILES  smoke.h DESTINATION ${INCLUDE_INSTALL_DIR} )

# Qt only
#install( FILES  smoke.h DESTINATION ${INSTALL_DIR}/include )

install( FILES  smoke.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include )
