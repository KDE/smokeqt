
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
list(PREPEND Qt5Core_INCLUDE_DIRS
  /usr/local/include
  /usr/include
  ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}
  ${CMAKE_C_IMPLICIT_INCLUDE_DIRECTORIES}
  )
create_configure_files("${Qt5Core_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtcore)
run_smokegen(20 "${smokegenArgs}")
get_smokegen_output_files(smokeqtcore_LIB_SRCS 20)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtcore SHARED ${smokeqtcore_LIB_SRCS})
add_library(smokeqtcore SHARED ${smokeqtcore_LIB_SRCS})

target_link_libraries(smokeqtcore Qt5::Core ${SMOKE_BASE_LIBRARY} )

set_target_properties(smokeqtcore
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqtcore LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtcore PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtcore
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtcore_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml DESTINATION share/smokegen)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtcore.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtcore.typedefs.txt DESTINATION share/smoke)
