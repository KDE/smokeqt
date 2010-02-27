add_definitions(-DSMOKE_BUILDING)
add_subdirectory(qt)
set(SMOKE_ENABLED "yes - Qt")

add_subdirectory(qtcore)
add_subdirectory(deptool)
add_subdirectory(smokeapi)

set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtCore")
add_subdirectory(qtnetwork)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtNetwork")
add_subdirectory(qtdbus)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtDBus")
add_subdirectory(qtgui)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtGui")
add_subdirectory(qtsvg)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtSvg")
add_subdirectory(qtsql)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtSql")
add_subdirectory(qtxml)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtXml")
add_subdirectory(qtxmlpatterns)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtXmlPatterns")
add_subdirectory(qtopengl)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtOpenGL")
add_subdirectory(qtwebkit)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtWebKit")
add_subdirectory(qtscript)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtScript")
add_subdirectory(qtuitools)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtUiTools")
add_subdirectory(qttest)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtTest")
add_subdirectory(qtmultimedia)
set(SMOKE_ENABLED "${SMOKE_ENABLED}, QtMultimedia")

if(PHONON_FOUND)
    add_subdirectory(phonon)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Phonon")
endif(PHONON_FOUND)

if(QSCINTILLA_FOUND)
    add_subdirectory(qsci)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, QScintilla2")
endif(QSCINTILLA_FOUND)

if(Qwt5_Qt4_FOUND)
    add_subdirectory(qwt)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Qwt")
endif(Qwt5_Qt4_FOUND)

if(QIMAGEBLITZ_FOUND)
    add_subdirectory(qimageblitz)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, QImageBlitz")
endif(QIMAGEBLITZ_FOUND)

if(KDE4_FOUND)
    add_subdirectory(kde)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDE")

    add_subdirectory(kdecore)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDECore")

    add_subdirectory(kdeui)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDEUi")

    add_subdirectory(kio)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KIO")

    add_subdirectory(kparts)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KParts")

    add_subdirectory(kfile)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KFile")

    add_subdirectory(knewstuff2)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KNewStuff2")

    add_subdirectory(knewstuff3)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KNewStuff3")

    add_subdirectory(kutils)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KUtils")

    add_subdirectory(khtml)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KHTML")

    add_subdirectory(ktexteditor)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KTextEditor")


    add_subdirectory(solid)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Solid")
    add_subdirectory(plasma)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Plasma")

endif(KDE4_FOUND)

if(Soprano_FOUND)
    add_subdirectory(soprano)
    add_subdirectory(sopranoclient)
    add_subdirectory(sopranoserver)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Soprano")
endif(Soprano_FOUND)

if(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
    add_subdirectory(akonadi)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Akonadi")
endif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)

if(KDEVPLATFORM_FOUND)
    add_subdirectory(kdevplatform)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, KDevPlatform")
endif(KDEVPLATFORM_FOUND)

if(LIBATTICA_FOUND)
    add_subdirectory(attica)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Attica")
endif(LIBATTICA_FOUND)

if(Nepomuk_FOUND)
    add_subdirectory(nepomuk)
    add_subdirectory(nepomukquery)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Nepomuk")
endif(Nepomuk_FOUND)

if(OKULAR_FOUND)
    add_subdirectory(okular)
    set(SMOKE_ENABLED "${SMOKE_ENABLED}, Okular")
endif(OKULAR_FOUND)

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
