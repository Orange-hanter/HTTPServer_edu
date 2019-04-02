if ( UNIX )
    message("Using sistem is UNIX!")
    cmake_minimum_required(VERSION 3.10.0)
elseif(WIN32)
    message("Using sistem is WIN32!")
    cmake_minimum_required(VERSION 3.12)
endif()

project( OPC_SERVER )

include_directories(
    ${CMAKE_SOURCE_DIR}/Src
    ${CMAKE_SOURCE_DIR}/Lib/Json
)

#add_subdirectory( ${CMAKE_SOURCE_DIR}/Lib/modbuspp )

set( Sources ${CMAKE_SOURCE_DIR}/Src )

set( app_INCLUDES
    ${Sources}/app.h
)

set( app_SOURCES
    ${Sources}/app.cpp
)

add_executable( ${PROJECT_NAME}
                ${Sources}/main.cpp 
                ${app_INCLUDES}
                ${app_SOURCES}
              )

#target_link_libraries( ${PROJECT_NAME} modbuspp )
