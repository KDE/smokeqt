OPTION(ENABLE_SMOKE "build Smoke" ON)
OPTION(ENABLE_QTWEBKIT_SMOKE "build QtWebKitSmoke" ON)
OPTION(ENABLE_QTSCRIPT_SMOKE "build QtScriptSmoke" ON)
OPTION(ENABLE_QTUITOOLS_SMOKE "build QtUiToolsSmoke" ON)
OPTION(ENABLE_PHONON_SMOKE "build PhononSmoke" ON)
OPTION(ENABLE_QSCI_SMOKE "build QsciSmoke" ON)
OPTION(ENABLE_QWT_SMOKE "build QwtSmoke" OFF)
OPTION(ENABLE_KDE_SMOKE "build KDESmoke" ON)
OPTION(ENABLE_KDEVPLATFORM_SMOKE "build KDevPlatformSmoke" OFF)
OPTION(ENABLE_KHTML_SMOKE "build KHTMLSmoke" ON)
OPTION(ENABLE_KTEXTEDITOR_SMOKE "build KTextEditorSmoke" ON)
OPTION(ENABLE_OKULAR_SMOKE "build OkularSmoke" OFF)
OPTION(ENABLE_SOLID_SMOKE "build SolidSmoke" ON)

set(SMOKE_ENABLED "no")
if(ENABLE_SMOKE)
    add_subdirectory(qt)
    set(SMOKE_ENABLED "yes - Qt")

    if(ENABLE_QTWEBKIT_SMOKE)
        add_subdirectory(qtwebkit)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtWebKit")
    endif(ENABLE_QTWEBKIT_SMOKE)

    if(ENABLE_QTSCRIPT_SMOKE)
        add_subdirectory(qtscript)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtScript")
    endif(ENABLE_QTSCRIPT_SMOKE)

    if(ENABLE_QTUITOOLS_SMOKE)
        add_subdirectory(qtuitools)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtUiTools")
    endif(ENABLE_QTUITOOLS_SMOKE)

    if(ENABLE_PHONON_SMOKE AND PHONON_FOUND)
        add_subdirectory(phonon)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Phonon")
    endif(ENABLE_PHONON_SMOKE AND PHONON_FOUND)

    if(ENABLE_QSCI_SMOKE AND QSCINTILLA_FOUND)
        add_subdirectory(qsci)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QScintilla2")
    endif(ENABLE_QSCI_SMOKE AND QSCINTILLA_FOUND)

    if(ENABLE_QWT_SMOKE)
        add_subdirectory(qwt)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Qwt")
    endif(ENABLE_QWT_SMOKE)

    if(ENABLE_SOLID_SMOKE)
        add_subdirectory(solid)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Solid")
    endif(ENABLE_SOLID_SMOKE)

    if(Soprano_FOUND)
        add_subdirectory(soprano)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Soprano")
    endif(Soprano_FOUND)

    if(ENABLE_PLASMA_SMOKE)
        add_subdirectory(plasma)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Plasma")
    endif(ENABLE_PLASMA_SMOKE)

    if(ENABLE_KDE_SMOKE)
        add_subdirectory(kde)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDE")
    endif(ENABLE_KDE_SMOKE)

    if(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
        add_subdirectory(akonadi)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Akonadi")
    endif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)

    if(ENABLE_KDEVPLATFORM_SMOKE)
        add_subdirectory(kdevplatform)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDevPlatform")
    endif(ENABLE_KDEVPLATFORM_SMOKE)

    if(ENABLE_KHTML_SMOKE)
        add_subdirectory(khtml)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KHTML")
    endif(ENABLE_KHTML_SMOKE)

    if(ENABLE_KTEXTEDITOR_SMOKE)
        add_subdirectory(ktexteditor)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KTextEditor")
    endif(ENABLE_KTEXTEDITOR_SMOKE)

    if(Nepomuk_FOUND)
        add_subdirectory(nepomuk)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Nepomuk")
    endif(Nepomuk_FOUND)

    if(OKULAR_FOUND)
        add_subdirectory(okular)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Okular")
    endif(OKULAR_FOUND)

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
