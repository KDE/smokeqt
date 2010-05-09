# Conditionally enable SMOKE bindings.
# Pass -DDISABLE_<component_name>=OFF to disable certain binding even if
# its dependencies are found.
# Usage:
#     SMOKE_ADD_BINDINGS(<component_found> <component_name> <subdir1> [<subdir2> ...])
macro(SMOKE_ADD_BINDINGS _component_found _component_name)
    if(${_component_found} AND NOT DISABLE_${_component_name})
        foreach(_subdir ${ARGN})
            add_subdirectory(${_subdir})
        endforeach(_subdir ${ARGN})
        set(SMOKE_ENABLED "${SMOKE_ENABLED} ${_component_name}")
    else(${_component_found} AND NOT DISABLE_${_component_name})
        set(SMOKE_DISABLED "${SMOKE_DISABLED} ${_component_name}")
    endif(${_component_found} AND NOT DISABLE_${_component_name})
endmacro(SMOKE_ADD_BINDINGS)

add_definitions(-DSMOKE_BUILDING)
set(SMOKE_ENABLED "")
set(SMOKE_DISABLED "")

smoke_add_bindings(QT_QTCORE_FOUND "QtCore" qtcore)
add_subdirectory(deptool)
add_subdirectory(smokeapi)

smoke_add_bindings(QT_QTNETWORK_FOUND "QtNetwork" qtnetwork)
smoke_add_bindings(QT_QTDBUS_FOUND "QtDBus" qtdbus)
smoke_add_bindings(QT_QTGUI_FOUND "QtGui" qtgui)
smoke_add_bindings(QT_QTSVG_FOUND "QtSvg" qtsvg)
smoke_add_bindings(QT_QTSQL_FOUND "QtSql" qtsql)
smoke_add_bindings(QT_QTXML_FOUND "QtXml" qtxml)
smoke_add_bindings(QT_QTXMLPATTERNS_FOUND "QtXmlPatterns" qtxmlpatterns)
smoke_add_bindings(QT_QTOPENGL_FOUND "QtOpenGL" qtopengl)
smoke_add_bindings(QT_QTWEBKIT_FOUND "QtWebKit" qtwebkit)
smoke_add_bindings(QT_QTSCRIPT_FOUND "QtScript" qtscript)
smoke_add_bindings(QT_QTUITOOLS_FOUND "QtUiTools" qtuitools)
smoke_add_bindings(QT_QTTEST_FOUND "QtTest" qttest)
smoke_add_bindings(QT_QTMULTIMEDIA_FOUND "QtMultimedia" qtmultimedia)

smoke_add_bindings(PHONON_FOUND "Phonon" phonon)

smoke_add_bindings(QSCINTILLA_FOUND "QScintilla2" qsci)

smoke_add_bindings(Qwt5_Qt4_FOUND "Qwt" qwt)

smoke_add_bindings(QIMAGEBLITZ_FOUND "QImageBlitz" qimageblitz)

smoke_add_bindings(KDE4_FOUND "KDECore" kdecore)
smoke_add_bindings(KDE4_FOUND "KDEUi" kdeui)
smoke_add_bindings(KDE4_FOUND "KIO" kio)
smoke_add_bindings(KDE4_FOUND "KParts" kparts)
smoke_add_bindings(KDE4_FOUND "KFile" kfile)
smoke_add_bindings(KDE4_FOUND "KNewStuff2" knewstuff2)
smoke_add_bindings(KDE4_FOUND "KNewStuff3" knewstuff3)
smoke_add_bindings(KDE4_FOUND "KUtils" kutils)
smoke_add_bindings(KDE4_FOUND "KHTML" khtml)
smoke_add_bindings(KDE4_FOUND "KTextEditor" ktexteditor)
smoke_add_bindings(KDE4_FOUND "Solid" solid)
smoke_add_bindings(KDE4_FOUND "Plasma" plasma)

smoke_add_bindings(Soprano_FOUND "Soprano" soprano sopranoclient sopranoserver)

if(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
    set(BUILD_Akonadi TRUE)
elseif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
    set(BUILD_Akonadi FALSE)
endif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
smoke_add_bindings(BUILD_Akonadi "Akonadi" akonadi)

smoke_add_bindings(KDEVPLATFORM_FOUND "KDevPlatform" kdevplatform)

smoke_add_bindings(LIBATTICA_FOUND "Attica" attica)

smoke_add_bindings(Nepomuk_FOUND "Nepomuk" nepomuk nepomukquery)

smoke_add_bindings(OKULAR_FOUND "Okular" okular)

# for qtguess.pl
if (APPLE)
set(qt_test_threshold 15)
else (APPLE)
set(qt_test_threshold 10)
endif (APPLE)

message(STATUS "Build SMOKE bindings:" ${SMOKE_ENABLED})
message(STATUS "Skip SMOKE bindings:" ${SMOKE_DISABLED})

########### install files ###############

# KDE specific
#install( FILES  smoke.h DESTINATION ${INCLUDE_INSTALL_DIR} )

# Qt only
#install( FILES  smoke.h DESTINATION ${INSTALL_DIR}/include )

install( FILES  smoke.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include )
