include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Quick_INCLUDE_DIRS};${Qt5Network_INCLUDE_DIRS};${Qt5WebEngineCore_INCLUDE_DIRS};${Qt5WebEngineWidgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtwebenginewidgets)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqtwebenginewidgets_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqtwebenginewidgets SHARED ${smokeqtwebenginewidgets_LIB_SRCS})

target_link_libraries(smokeqtwebenginewidgets 
    smokeqtcore 
    smokeqtgui 
    smokeqtquick
    smokeqtnetwork
    smokeqtwebenginecore
    Qt5::WebEngineWidgets
)

set_target_properties(smokeqtwebenginewidgets
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqtwebenginewidgets LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtwebenginewidgets PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtwebenginewidgets PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtwebenginewidgets_smoke.h DESTINATION include/smoke )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtwebenginewidgets.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtwebenginewidgets.typedefs.txt DESTINATION share/smoke)
