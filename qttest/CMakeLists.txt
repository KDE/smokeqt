include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Test_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qttest)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqttest_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqttest SHARED ${smokeqttest_LIB_SRCS})

target_link_libraries(smokeqttest
    smokeqtcore
    smokeqtgui
    Qt5::Core
    Qt5::Gui
    Qt5::Test
)

set_target_properties(smokeqttest
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqttest LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqttest PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqttest
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qttest_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qttest.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qttest.typedefs.txt DESTINATION share/smoke)
