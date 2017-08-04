
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Multimedia_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtmultimedia)
run_smokegen(10 "${smokegenArgs}")
get_smokegen_output_files(smokeqtmultimedia_LIB_SRCS 10)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtmultimedia SHARED ${smokeqtmultimedia_LIB_SRCS})
add_library(smokeqtmultimedia SHARED ${smokeqtmultimedia_LIB_SRCS})

target_link_libraries(smokeqtmultimedia
    smokeqtcore
    smokeqtgui
    Qt5::Core
    Qt5::Gui
    Qt5::Multimedia
)

set_target_properties(smokeqtmultimedia
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqtmultimedia
    LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtmultimedia PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtmultimedia
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtmultimedia_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtmultimedia.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtmultimedia.typedefs.txt DESTINATION share/smoke)
