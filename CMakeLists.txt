OPTION(ENABLE_SMOKE "build Smoke" ON)
OPTION(ENABLE_SMOKEQTWEBKIT "build SmokeQtWebKit" ON)
OPTION(ENABLE_SMOKEQTUITOOLS "build SmokeQtUiTools" ON)

OPTION(ENABLE_SMOKEPHONON "build SmokePhonon" ON)
OPTION(ENABLE_SMOKEQSCI "build SmokeQsci" OFF)
OPTION(ENABLE_SMOKEQWT "build SmokeQwt" OFF)
OPTION(ENABLE_SMOKESOPRANO "build SmokeSoprano" ON)

OPTION(ENABLE_SMOKEAKONADI "build SmokeAkonadi" OFF)
OPTION(ENABLE_SMOKEPLASMA "build SmokePlasma" OFF)
OPTION(ENABLE_SMOKEKDE "build SmokeKDE" ON)
OPTION(ENABLE_SMOKEKDEVPLATFORM "build SmokeKDevPlatform" OFF)
OPTION(ENABLE_SMOKEKHTML "build SmokeKHTML" ON)
OPTION(ENABLE_SMOKEKTEXTEDITOR "build SmokeKTextEditor" ON)
OPTION(ENABLE_SMOKENEPOMUK "build SmokeNepomuk" ON)
OPTION(ENABLE_SMOKEOKULAR "build SmokeOkular" ON)
OPTION(ENABLE_SMOKESOLID "build SmokeSolid" ON)

set(SMOKE_ENABLED "no")
if(ENABLE_SMOKE)
    add_subdirectory(qt)
    set(SMOKE_ENABLED "yes - Qt")

    if(ENABLE_SMOKEQTWEBKIT)
        add_subdirectory(qtwebkit)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtWebKit")
    endif(ENABLE_SMOKEQTWEBKIT)

    if(ENABLE_SMOKEQTUITOOLS)
        add_subdirectory(qtuitools)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtUiTools")
    endif(ENABLE_SMOKEQTUITOOLS)

    if(ENABLE_SMOKEPHONON)
        add_subdirectory(phonon)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Phonon")
    endif(ENABLE_SMOKEPHONON)

    if(ENABLE_SMOKEQSCI)
        add_subdirectory(qsci)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QScintilla2")
    endif(ENABLE_SMOKEQSCI)

    if(ENABLE_SMOKEQWT)
        add_subdirectory(qwt)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Qwt")
    endif(ENABLE_SMOKEQWT)

    if(ENABLE_SMOKESOLID)
        add_subdirectory(solid)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Solid")
    endif(ENABLE_SMOKESOLID)

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

    if(ENABLE_SMOKEKDEVPLATFORM)
        add_subdirectory(kdevplatform)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDevPlatform")
    endif(ENABLE_SMOKEKDEVPLATFORM)

    if(ENABLE_SMOKEKHTML)
        add_subdirectory(khtml)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KHTML")
    endif(ENABLE_SMOKEKHTML)

    if(ENABLE_SMOKEKTEXTEDITOR)
        add_subdirectory(ktexteditor)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KTextEditor")
    endif(ENABLE_SMOKEKTEXTEDITOR)

    if(ENABLE_SMOKENEPOMUK)
        add_subdirectory(nepomuk)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Nepomuk")
    endif(ENABLE_SMOKENEPOMUK)

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
