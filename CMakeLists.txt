project(SMOKEQT5)

cmake_minimum_required(VERSION 2.8.11)

find_package(Qt5 ${REQUIRED_QT_VERSION} CONFIG REQUIRED Core Network Sql DBus Gui Widgets OpenGL Qml Quick Location Sensors WebKit WebKitWidgets Xml Test)

find_package(Qt5Core)
find_path (Qt5_INCLUDE_DIR NAMES QtCore PATHS ${Qt5Core_INCLUDE_DIRS})
set(Qt5Core_INCLUDE_DIR "${Qt5_INCLUDE_DIR}/QtCore")

find_package(Qt5Network)
find_path (Qt5Network_PATH NAMES QtNetwork PATHS ${Qt5Network_INCLUDE_DIRS})
set(Qt5Network_INCLUDE_DIR "${Qt5Network_PATH}/QtNetwork")

find_package(Qt5Sql)
find_path (Qt5Sql_PATH NAMES QtSql PATHS ${Qt5Sql_INCLUDE_DIRS})
set(Qt5Sql_INCLUDE_DIR "${Qt5Sql_PATH}/QtSql")

find_package(Qt5DBus)
find_path (Qt5DBus_PATH NAMES QtDBus PATHS ${Qt5DBus_INCLUDE_DIRS})
set(Qt5DBus_INCLUDE_DIR "${Qt5DBus_PATH}/QtDBus")

find_package(Qt5Gui)
find_path (Qt5Gui_PATH NAMES QtGui PATHS ${Qt5Gui_INCLUDE_DIRS})
set(Qt5Gui_INCLUDE_DIR "${Qt5Gui_PATH}/QtGui")

find_package(Qt5Widgets)
find_path (Qt5Widgets_PATH NAMES QtWidgets PATHS ${Qt5Widgets_INCLUDE_DIRS})
set(Qt5Widgets_INCLUDE_DIR "${Qt5Widgets_PATH}/QtWidgets")

find_package(Qt5OpenGL)
find_path (Qt5OpenGL_PATH NAMES QtOpenGL PATHS ${Qt5OpenGL_INCLUDE_DIRS})
set(Qt5OpenGL_INCLUDE_DIR "${Qt5OpenGL_PATH}/QtOpenGL")

find_package(Qt5Qml)
find_path (Qt5Qml_PATH NAMES QtQml PATHS ${Qt5Qml_INCLUDE_DIRS})
set(Qt5Qml_INCLUDE_DIR "${Qt5Qml_PATH}/QtQml")

find_package(Qt5Quick)
find_path (Qt5Quick_PATH NAMES QtQuick PATHS ${Qt5Quick_INCLUDE_DIRS})
set(Qt5Quick_INCLUDE_DIR "${Qt5Quick_PATH}/QtQuick")

find_package(Qt5Location)
find_path (Qt5Location_PATH NAMES QtLocation PATHS ${Qt5Location_INCLUDE_DIRS})
set(Qt5Location_INCLUDE_DIR "${Qt5Location_PATH}/QtLocation")

find_package(Qt5Sensors)
find_path (Qt5Sensors_PATH NAMES QtSensors PATHS ${Qt5Sensors_INCLUDE_DIRS})
set(Qt5Sensors_INCLUDE_DIR "${Qt5Sensors_PATH}/QtSensors")

find_package(Qt5WebKit)
find_path (Qt5WebKit_PATH NAMES QtWebKit PATHS ${Qt5WebKit_INCLUDE_DIRS})
set(Qt5WebKit_INCLUDE_DIR "${Qt5WebKit_PATH}/QtWebKit")

find_package(Qt5WebKitWidgets)
find_path (Qt5WebKitWidgets_PATH NAMES QtWebKitWidgets PATHS ${Qt5WebKitWidgets_INCLUDE_DIRS})
set(Qt5WebKitWidgets_INCLUDE_DIR "${Qt5WebKitWidgets_PATH}/QtWebKitWidgets")

find_package(Qt5Test)
find_path (Qt5Test_PATH NAMES QtTest PATHS ${Qt5Test_INCLUDE_DIRS})
set(Qt5Test_INCLUDE_DIR "${Qt5Test_PATH}/QtTest")

find_package(Qt5Xml)
find_path (Qt5Xml_PATH NAMES QtXml PATHS ${Qt5Xml_INCLUDE_DIRS})
set(Qt5Xml_INCLUDE_DIR "${Qt5Xml_PATH}/QtXml")

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
add_subdirectory(qttest)
add_subdirectory(qtxml)
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
