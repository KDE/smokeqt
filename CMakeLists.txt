FIND_PACKAGE(QScintilla)

OPTION(ENABLE_SMOKE "build Smoke" ON)
OPTION(ENABLE_SMOKEQTUITOOLS "build SmokeQtUiTools" ON)
OPTION(ENABLE_SMOKEQSCI "build SmokeQsci" OFF)
OPTION(ENABLE_SMOKEQWT "build SmokeQwt" OFF)
OPTION(ENABLE_SMOKESOPRANO "build SmokeSoprano" OFF)
OPTION(ENABLE_SMOKEPLASMA "build SmokePlasma" OFF)
OPTION(ENABLE_SMOKEKDE "build SmokeKDE" ON)
OPTION(ENABLE_SMOKEAKONADI "build SmokeAkonadi" OFF)
OPTION(ENABLE_SMOKEKHTML "build SmokeKHTML" ON)
OPTION(ENABLE_SMOKEOKULAR "build SmokeOkular" OFF)

set(SMOKE_ENABLED "no")
if(ENABLE_SMOKE)
    add_subdirectory(qt)
    set(SMOKE_ENABLED "yes - Qt")

    if(ENABLE_SMOKEQTUITOOLS)
        add_subdirectory(qtuitools)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtUiTools")
    endif(ENABLE_SMOKEQTUITOOLS)

    if(ENABLE_SMOKEQSCI)
        if( QSCINTILLA_FOUND)
           add_subdirectory(qsci)
           set(SMOKE_ENABLED "${SMOKE_ENABLED}, QScintilla2")
        else(QSCINTILLA_FOUND)
           MESSAGE(STATUS "QScintilla was not found, SmokeQsci will not build")
        endif(QSCINTILLA_FOUND)
    endif(ENABLE_SMOKEQSCI)

    if(ENABLE_SMOKEQWT)
        add_subdirectory(qwt)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Qwt")
    endif(ENABLE_SMOKEQWT)

    if(ENABLE_SMOKESOPRANO)
        add_subdirectory(soprano)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Soprano")
    endif(ENABLE_SMOKESOPRANO)

    if(ENABLE_SMOKEPLASMA)
        add_subdirectory(plasma)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Plasma")
    endif(ENABLE_SMOKEPLASMA)

    if(ENABLE_SMOKEKDE)
        add_subdirectory(kde)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDE")
    endif(ENABLE_SMOKEKDE)

    if(ENABLE_SMOKEAKONADI)
        add_subdirectory(akonadi)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Akonadi")
    endif(ENABLE_SMOKEAKONADI)

    if(ENABLE_SMOKEKHTML)
        add_subdirectory(khtml)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KHTML")
    endif(ENABLE_SMOKEKHTML)

    if(ENABLE_SMOKEOKULAR)
        add_subdirectory(okular)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Okular")
    endif(ENABLE_SMOKEOKULAR)

endif(ENABLE_SMOKE)

# for qtguess.pl
if (APPLE)
set(qt_test_threshold 15)
else (APPLE)
set(qt_test_threshold 10)
endif (APPLE)

message(STATUS "Build Smoke... " ${SMOKE_ENABLED})


########### install files ###############

# KDE specific
#install( FILES  smoke.h DESTINATION ${INCLUDE_INSTALL_DIR} )

# Qt only
#install( FILES  smoke.h DESTINATION ${INSTALL_DIR}/include )

install( FILES  smoke.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include )
