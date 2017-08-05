
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Widgets_INCLUDE_DIRS};${Qt5Network_INCLUDE_DIRS};${Qt5OpenGL_INCLUDE_DIRS};${Qt5Multimedia_INCLUDE_DIRS};${Qt5MultimediaWidgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtmultimediawidgets)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtmultimediawidgets_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtmultimediawidgets SHARED ${smokeqtmultimediawidgets_LIB_SRCS})
add_library(smokeqtmultimediawidgets SHARED ${smokeqtmultimediawidgets_LIB_SRCS})

target_link_libraries(smokeqtmultimediawidgets
    smokeqtcore
    smokeqtgui
    smokeqtwidgets
    smokeqtnetwork
    smokeqtopengl
    smokeqtmultimedia
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Network
    Qt5::OpenGL
    Qt5::Multimedia
    Qt5::MultimediaWidgets
)

set_target_properties(smokeqtmultimediawidgets
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqtmultimediawidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtmultimediawidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtmultimediawidgets
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtmultimediawidgets_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtmultimediawidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtmultimediawidgets.typedefs.txt DESTINATION share/smoke)
