OPTION(ENABLE_SMOKE "build Smoke" ON)
OPTION(ENABLE_QTCORE_SMOKE "build QtCoreSmoke" ON)
OPTION(ENABLE_QTNETWORK_SMOKE "build QtNetworkSmoke" ON)
OPTION(ENABLE_QTDBUS_SMOKE "build QtDBusSmoke" ON)
OPTION(ENABLE_QTGUI_SMOKE "build QtGuiSmoke" ON)
OPTION(ENABLE_QTSVG_SMOKE "build QtSvgSmoke" ON)
OPTION(ENABLE_QTSQL_SMOKE "build QtSqlSmoke" ON)
OPTION(ENABLE_QTXML_SMOKE "build QtXmlSmoke" ON)
OPTION(ENABLE_QTXMLPATTERNS_SMOKE "build QtXmlPatternsSmoke" ON)
OPTION(ENABLE_QTOPENGL_SMOKE "build QtOpenGLSmoke" ON)
OPTION(ENABLE_QTWEBKIT_SMOKE "build QtWebKitSmoke" ON)
OPTION(ENABLE_QTSCRIPT_SMOKE "build QtScriptSmoke" ON)
OPTION(ENABLE_QTUITOOLS_SMOKE "build QtUiToolsSmoke" ON)
OPTION(ENABLE_QTTEST_SMOKE "build QtTestSmoke" ON)
OPTION(ENABLE_QTMULTIMEDIA_SMOKE "build QtMultimediaSmoke" ON)
OPTION(ENABLE_PHONON_SMOKE "build PhononSmoke" ON)
OPTION(ENABLE_QSCI_SMOKE "build QsciSmoke" ON)
OPTION(ENABLE_QWT_SMOKE "build QwtSmoke" OFF)
OPTION(ENABLE_QIMAGEBLITZ_SMOKE "build QImageBlitzSmoke" ON)
OPTION(ENABLE_KDE_SMOKE "build KDESmoke" ON)
OPTION(ENABLE_KDECORE_SMOKE "build KDECoreSmoke" ON)
OPTION(ENABLE_KDEUI_SMOKE "build KDEUiSmoke" ON)
OPTION(ENABLE_KIO_SMOKE "build KIOSmoke" ON)
OPTION(ENABLE_KPARTS_SMOKE "build KPartsSmoke" ON)
OPTION(ENABLE_KFILE_SMOKE "build KFileSmoke" ON)
OPTION(ENABLE_KNEWSTUFF2_SMOKE "build KNewStuff2" ON)
OPTION(ENABLE_KNEWSTUFF3_SMOKE "build KNewStuff3" ON)
OPTION(ENABLE_KUTILS_SMOKE "build KUtils" ON)
OPTION(ENABLE_KHTML_SMOKE "build KHTMLSmoke" ON)
OPTION(ENABLE_KTEXTEDITOR_SMOKE "build KTextEditorSmoke" ON)
OPTION(ENABLE_SOLID_SMOKE "build SolidSmoke" ON)
OPTION(ENABLE_PLASMA_SMOKE "build PlasmaSmoke" ON)
OPTION(ENABLE_ATTICA_SMOKE "build AtticaSmoke" ON)

set(SMOKE_ENABLED "no")
if(ENABLE_SMOKE)
    add_definitions(-DSMOKE_BUILDING)
    add_subdirectory(qt)
    set(SMOKE_ENABLED "yes - Qt")

    if(ENABLE_QTCORE_SMOKE)
        add_subdirectory(qtcore)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtCore")
    endif(ENABLE_QTCORE_SMOKE)

    if(ENABLE_QTNETWORK_SMOKE)
        add_subdirectory(qtnetwork)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtNetwork")
    endif(ENABLE_QTNETWORK_SMOKE)

    if(ENABLE_QTDBUS_SMOKE)
        add_subdirectory(qtdbus)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtDBus")
    endif(ENABLE_QTDBUS_SMOKE)

    if(ENABLE_QTGUI_SMOKE)
        add_subdirectory(qtgui)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtGui")
    endif(ENABLE_QTGUI_SMOKE)

    if(ENABLE_QTSVG_SMOKE)
        add_subdirectory(qtsvg)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtSvg")
    endif(ENABLE_QTSVG_SMOKE)

    if(ENABLE_QTSQL_SMOKE)
        add_subdirectory(qtsql)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtSql")
    endif(ENABLE_QTSQL_SMOKE)

    if(ENABLE_QTXML_SMOKE)
        add_subdirectory(qtxml)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtXml")
    endif(ENABLE_QTXML_SMOKE)

    if(ENABLE_QTXMLPATTERNS_SMOKE)
        add_subdirectory(qtxmlpatterns)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtXmlPatterns")
    endif(ENABLE_QTXMLPATTERNS_SMOKE)

    if(ENABLE_QTOPENGL_SMOKE)
        add_subdirectory(qtopengl)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtOpenGL")
    endif(ENABLE_QTOPENGL_SMOKE)

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

    if(ENABLE_QTTEST_SMOKE)
        add_subdirectory(qttest)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtTest")
    endif(ENABLE_QTTEST_SMOKE)

    if(ENABLE_QTMULTIMEDIA_SMOKE)
        add_subdirectory(qtmultimedia)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtMultimedia")
    endif(ENABLE_QTMULTIMEDIA_SMOKE)

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

    if(ENABLE_QIMAGEBLITZ_SMOKE)
        add_subdirectory(qimageblitz)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, QImageBlitz")
    endif(ENABLE_QIMAGEBLITZ_SMOKE)

    if(ENABLE_SOLID_SMOKE)
        add_subdirectory(solid)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Solid")
    endif(ENABLE_SOLID_SMOKE)

    if(Soprano_FOUND)
        add_subdirectory(soprano)
        add_subdirectory(sopranoclient)
        add_subdirectory(sopranoserver)
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

    if(ENABLE_KDECORE_SMOKE)
        add_subdirectory(kdecore)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDECore")
    endif(ENABLE_KDECORE_SMOKE)

    if(ENABLE_KDEUI_SMOKE)
        add_subdirectory(kdeui)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDEUi")
    endif(ENABLE_KDEUI_SMOKE)

    if(ENABLE_KIO_SMOKE)
        add_subdirectory(kio)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KIO")
    endif(ENABLE_KIO_SMOKE)

    if(ENABLE_KPARTS_SMOKE)
        add_subdirectory(kparts)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KParts")
    endif(ENABLE_KPARTS_SMOKE)

    if(ENABLE_KFILE_SMOKE)
        add_subdirectory(kfile)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KFile")
    endif(ENABLE_KFILE_SMOKE)

    if(ENABLE_KNEWSTUFF2_SMOKE)
        add_subdirectory(knewstuff2)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KNewStuff2")
    endif(ENABLE_KNEWSTUFF2_SMOKE)

    if(ENABLE_KNEWSTUFF3_SMOKE)
        add_subdirectory(knewstuff3)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KNewStuff3")
    endif(ENABLE_KNEWSTUFF3_SMOKE)

    if(ENABLE_KUTILS_SMOKE)
        add_subdirectory(kutils)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KUtils")
    endif(ENABLE_KUTILS_SMOKE)

    if(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
        add_subdirectory(akonadi)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Akonadi")
    endif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)

    if(ENABLE_KHTML_SMOKE)
        add_subdirectory(khtml)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KHTML")
    endif(ENABLE_KHTML_SMOKE)

    if(ENABLE_KTEXTEDITOR_SMOKE)
        add_subdirectory(ktexteditor)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, KTextEditor")
    endif(ENABLE_KTEXTEDITOR_SMOKE)

    if(ENABLE_ATTICA_SMOKE)
        add_subdirectory(attica)
        set(SMOKE_ENABLED "${SMOKE_ENABLED}, Attica")
    endif(ENABLE_ATTICA_SMOKE)

    if(Nepomuk_FOUND)
        add_subdirectory(nepomuk)
        add_subdirectory(nepomukquery)
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
