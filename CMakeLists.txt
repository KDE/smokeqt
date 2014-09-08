project(SMOKEQT5)

cmake_minimum_required(VERSION 2.8.11)

find_package(Qt5Core)
list(GET Qt5Core_INCLUDE_DIRS 0 Qt5Core_INCLUDE_DIR)
list(GET Qt5Core_INCLUDE_DIRS 1 Qt5_INCLUDE_DIR)

find_package(Qt5Network)
list(GET Qt5Network_INCLUDE_DIRS 0 Qt5Network_INCLUDE_DIR)

find_package(Qt5Sql)
list(GET Qt5Sql_INCLUDE_DIRS 0 Qt5Sql_INCLUDE_DIR)

find_package(Qt5DBus)
list(GET Qt5DBus_INCLUDE_DIRS 0 Qt5DBus_INCLUDE_DIR)

find_package(Qt5Gui)
list(GET Qt5Gui_INCLUDE_DIRS 0 Qt5Gui_INCLUDE_DIR)

find_package(Qt5Widgets)
list(GET Qt5Widgets_INCLUDE_DIRS 0 Qt5Widgets_INCLUDE_DIR)

find_package(Qt5OpenGL)
list(GET Qt5OpenGL_INCLUDE_DIRS 0 Qt5OpenGL_INCLUDE_DIR)

find_package(Qt5Qml)
list(GET Qt5Qml_INCLUDE_DIRS 0 Qt5Qml_INCLUDE_DIR)

find_package(Qt5Quick)
list(GET Qt5Quick_INCLUDE_DIRS 0 Qt5Quick_INCLUDE_DIR)

find_package(Qt5Location)
list(GET Qt5Location_INCLUDE_DIRS 0 Qt5Location_INCLUDE_DIR)

find_package(Qt5Sensors)
list(GET Qt5Sensors_INCLUDE_DIRS 0 Qt5Sensors_INCLUDE_DIR)

find_package(Qt5WebKit)
list(GET Qt5WebKit_INCLUDE_DIRS 0 Qt5WebKit_INCLUDE_DIR)

find_package(Qt5WebKitWidgets)
list(GET Qt5WebKitWidgets_INCLUDE_DIRS 0 Qt5WebKitWidgets_INCLUDE_DIR)

add_definitions(-DSMOKE_BUILDING)

find_package(Smoke)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SMOKE_CMAKE_MODULE_DIR}")
include(MacroOptionalFindPackage)
include(MacroOptionalAddBindings)
include(MacroLogFeature)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

# Set LIB_INSTALL_DIR if it's not set already.
if (NOT LIB_INSTALL_DIR)
    set (LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
endif (NOT LIB_INSTALL_DIR)

## disable deprecation waringins
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wno-deprecated-declarations")
endif()

set(QTDEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/qtdefines)

add_subdirectory(qtcore)
add_subdirectory(qtnetwork)
add_subdirectory(qtsql)
add_subdirectory(qtdbus)
add_subdirectory(qtgui)
add_subdirectory(qtwidgets)
add_subdirectory(qtopengl)
add_subdirectory(qtqml)
add_subdirectory(qtquick)
add_subdirectory(qtlocation)
add_subdirectory(qtsensors)
add_subdirectory(qtwebkit)
add_subdirectory(qtwebkitwidgets)
macro_optional_add_bindings(QT_QTNETWORK_FOUND "QtNetwork" qtnetwork)
macro_optional_add_bindings(QT_QTDBUS_FOUND "QtDBus" qtdbus)
macro_optional_add_bindings(QT_QTGUI_FOUND "QtGui" qtgui)
macro_optional_add_bindings(QT_QTQML_FOUND "QtQml" qtqml)
macro_optional_add_bindings(QT_QTQUICK_FOUND "QtQuick" qtquick)
#macro_optional_add_bindings(QT_QTDECLARATIVE_FOUND "QtDeclarative" qtdeclarative)
macro_optional_add_bindings(QT_QTWIDGETS_FOUND "QtWidgets" qtwidgets)
macro_optional_add_bindings(QT_QTPRINTSUPPORT_FOUND "QtPrintSupport" qtprintsupport)
macro_optional_add_bindings(QT_QTSVG_FOUND "QtSvg" qtsvg)
macro_optional_add_bindings(QT_QTSQL_FOUND "QtSql" qtsql)
macro_optional_add_bindings(QT_QTXML_FOUND "QtXml" qtxml)
macro_optional_add_bindings(QT_QTXMLPATTERNS_FOUND "QtXmlPatterns" qtxmlpatterns)
macro_optional_add_bindings(QT_QTOPENGL_FOUND "QtOpenGL" qtopengl)
#macro_optional_add_bindings(QT_QTWEBKIT_FOUND "QtWebKit" qtwebkit)
macro_optional_add_bindings(QT_QTWEBKITWIDGETS_FOUND "QtWebKitWidgets" qtwebkitwidgets)
macro_optional_add_bindings(QT_QTSCRIPT_FOUND "QtScript" qtscript)
macro_optional_add_bindings(QT_QTSCRIPTTOOLS_FOUND "QtScriptTools" qtscripttools)
macro_optional_add_bindings(QT_QTUITOOLS_FOUND "QtUiTools" qtuitools)
#macro_optional_add_bindings(QT_QTTEST_FOUND "QtTest" qttest)
macro_optional_add_bindings(QT_QTMULTIMEDIA_FOUND "QtMultimedia" qtmultimedia)
macro_optional_add_bindings(QT_QTHELP_FOUND "QtHelp" qthelp)

macro_optional_add_bindings(PHONON_FOUND "Phonon" phonon)




# for qtguess.pl
if (APPLE)
set(qt_test_threshold 15)
else (APPLE)
set(qt_test_threshold 10)
endif (APPLE)

macro_display_bindings_log()
macro_display_feature_log()
