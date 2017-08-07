
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Xml_INCLUDE_DIRS};${Qt5XmlPatterns_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtxmlpatterns)
run_smokegen(4 "${smokegenArgs}")
get_smokegen_output_files(smokeqtxmlpatterns_LIB_SRCS 4)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtxmlpatterns SHARED ${smokeqtxmlpatterns_LIB_SRCS})
add_library(smokeqtxmlpatterns SHARED ${smokeqtxmlpatterns_LIB_SRCS})

target_link_libraries(smokeqtxmlpatterns 
    smokeqtcore 
    smokeqtnetwork
    Qt5::Core
    Qt5::Network
    Qt5::XmlPatterns
)

set_target_properties(smokeqtxmlpatterns
    PROPERTIES
    VERSION 3.0.0
    SOVERSION 3
    CXX_STANDARD 11
)

install(TARGETS smokeqtxmlpatterns
    LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
	# Realign the stack, for compatibility with an older ABI.
	if(CMAKE_COMPILER_IS_GNUCXX)
		set_target_properties(smokeqtxmlpatterns PROPERTIES COMPILE_FLAGS -mstackrealign)
	endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtxmlpatterns
        PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtxmlpatterns_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtxmlpatterns.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtxmlpatterns.typedefs.txt DESTINATION share/smoke)
