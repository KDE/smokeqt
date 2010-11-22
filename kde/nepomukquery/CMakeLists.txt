find_package(Soprano REQUIRED)
find_package(Nepomuk REQUIRED)

if(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    add_definitions(-DGCC_VISIBILITY)
endif(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

include_directories( ${CMAKE_SOURCE_DIR}/smoke ${SOPRANO_INCLUDE_DIR}  ${NEPOMUK_QUERY_INCLUDE_DIR} )

########### next target ###############

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 

    COMMAND smokegen
    ARGS -config "${CMAKE_CURRENT_BINARY_DIR}/../nepomuk/config.xml" -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
         -- ${CMAKE_CURRENT_SOURCE_DIR}/nepomukquery_includes.h
    DEPENDS smokegen generator_smoke WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

macro_add_file_dependencies( ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp )

set(smokenepomukquery_LIB_SRCS ${CMAKE_CURRENT_BINARY_DIR}/smokedata.cpp  
    ${CMAKE_CURRENT_BINARY_DIR}/x_1.cpp 
)

kde4_add_library(smokenepomukquery SHARED ${smokenepomukquery_LIB_SRCS})

target_link_libraries(smokenepomukquery 
    ${NEPOMUK_LIBRARIES}
    ${NEPOMUK_QUERY_LIBRARIES}
    ${SOPRANO_LIBRARIES}
    nepomukquery
    ${KDE4_KDECORE_LIBS}
    smokeqtcore
)

set_target_properties(smokenepomukquery PROPERTIES VERSION 3.0.0 SOVERSION 3 )
install(TARGETS smokenepomukquery DESTINATION ${LIB_INSTALL_DIR} )
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../nepomukquery_smoke.h DESTINATION include/smoke )

########### install files ###############
