project(SmokeKDE)

find_package(KDE4 REQUIRED)
if(KDE_VERSION VERSION_LESS "4.2.0")
    find_package(Plasma)
endif(KDE_VERSION VERSION_LESS "4.2.0")
include(KDE4Defaults)
find_package(Smoke COMPONENTS QtCore QtGui QtXml QtOpenGl QtSql QtNetwork QtDbus QtSvg)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${SMOKE_CMAKE_MODULE_DIR})
include(MacroLibrary)
include(MacroOptionalAddBindings)

set(QTDEFINES_FILE ${SMOKE_GEN_SHARED}/qtdefines CACHE FILEPATH "Path to the qtdefines file")
if(NOT EXISTS ${QTDEFINES_FILE})
    message(FATAL_ERROR "${QTDEFINES_FILE} doesn't exist. Please adjust the path manually")
endif(NOT EXISTS ${QTDEFINES_FILE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

add_definitions (${QT_DEFINITIONS} ${KDE4_DEFINITIONS} -DQT3_SUPPORT)
include_directories (${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR} ${KDE4_INCLUDES} )

macro_optional_find_package(LibAttica)
macro_log_feature(LIBATTICA_FOUND "libattica" "LibAttica" "http://www.kde.org" FALSE "" "Needed to compile libattica bindings")

macro_optional_find_package(Soprano)
macro_log_feature(SOPRANO_FOUND "Soprano" "Soprano libraries" "http://soprano.sourceforge.net" FALSE "" "Needed to compile Soprano bindings")

macro_optional_find_package(Nepomuk)
macro_log_feature(NEPOMUK_FOUND "Nepomuk" "Nepomuk libraries" "http://www.kde.org" FALSE "" "Needed to compile Nepomuk bindings")

macro_optional_find_package(KdepimLibs)
macro_log_feature(KDEPIMLIBS_FOUND "kdepimlibs" "KDE PIM libraries" "http://www.kde.org" FALSE "" "Needed to compile Akonadi bindings")

macro_optional_find_package(Akonadi)
macro_log_feature(AKONADI_FOUND "Akonadi" "Akonadi libraries" "http://www.kde.org" FALSE "" "Needed to compile Akonadi bindings")

macro_optional_find_package(Okular)
macro_log_feature(OKULAR_FOUND "Okular" "Okular libraries" "http://www.kde.org" FALSE "" "Needed to compile Okular bindings")

macro_optional_add_bindings(KDE4_FOUND "KDECore" kdecore)
macro_optional_add_bindings(KDE4_FOUND "KDEUi" kdeui)
macro_optional_add_bindings(KDE4_FOUND "KIO" kio)
macro_optional_add_bindings(KDE4_FOUND "KParts" kparts)
macro_optional_add_bindings(KDE4_FOUND "KFile" kfile)
macro_optional_add_bindings(KDE4_FOUND "KNewStuff2" knewstuff2)
macro_optional_add_bindings(KDE4_FOUND "KNewStuff3" knewstuff3)
macro_optional_add_bindings(KDE4_FOUND "KUtils" kutils)
macro_optional_add_bindings(KDE4_FOUND "KHTML" khtml)
macro_optional_add_bindings(KDE4_FOUND "KTextEditor" ktexteditor)
macro_optional_add_bindings(KDE4_FOUND "Solid" solid)
macro_optional_add_bindings(KDE4_FOUND "Plasma" plasma)

macro_optional_add_bindings(Soprano_FOUND "Soprano" soprano sopranoclient sopranoserver)

if(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
    set(BUILD_Akonadi TRUE)
else(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
    set(BUILD_Akonadi FALSE)
endif(KDEPIMLIBS_FOUND AND Akonadi_FOUND)
macro_optional_add_bindings(BUILD_Akonadi "Akonadi" akonadi)

macro_optional_add_bindings(LIBATTICA_FOUND "Attica" attica)

macro_optional_add_bindings(Nepomuk_FOUND "Nepomuk" nepomuk nepomukquery)

macro_optional_add_bindings(OKULAR_FOUND "Okular" okular)

find_library(KATEINTERFACES_LIBRARY kateinterfaces HINTS ${KDE4_LIB_DIR})
find_path(KATE_INCLUDE_DIR kate/plugin.h HINTS ${KDE4_INCLUDE_DIR})

macro_optional_add_bindings(KATE_INCLUDE_DIR "Kate" kate)

macro_display_bindings_log()
macro_display_feature_log()
