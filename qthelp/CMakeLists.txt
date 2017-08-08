
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Widgets_INCLUDE_DIRS};${Qt5Network_INCLUDE_DIRS};${Qt5Sql_INCLUDE_DIRS};${Qt5Help_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qthelp)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqthelp_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqthelp SHARED ${smokeqthelp_LIB_SRCS})
add_library(smokeqthelp SHARED ${smokeqthelp_LIB_SRCS})

target_link_libraries(smokeqthelp 
    smokeqtcore 
    smokeqtgui 
    smokeqtwidgets 
    smokeqtnetwork 
    smokeqtsql
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Network
    Qt5::Sql
    Qt5::Help
)

set_target_properties(smokeqthelp
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqthelp LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqthelp PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqthelp
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qthelp_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qthelp.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qthelp.typedefs.txt DESTINATION share/smoke)
