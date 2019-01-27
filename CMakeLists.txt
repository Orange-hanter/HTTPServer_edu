if ( UNIX )
    message("Using sistem is UNIX!")
    cmake_minimum_required(VERSION 3.10.0)
elseif(WIN32)
    message("Using sistem is WIN32!")
    cmake_minimum_required(VERSION 3.13)
endif()

project( OPC_SERVER )

include_directories(
	${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Src
)

#add_subdirectory( Lib/Json )

#add_library( Json SHARED ${CMAKE_SOURCE_DIR}/Lib/Json/json.hpp )

set( Sources ${CMAKE_CURRENT_SOURCE_DIR}/Src )
set( apps_SRCS  
    ${Sources}/app.h
    ${Sources}/app.cpp
    )

if ( UNIX )
    add_executable( ${PROJECT_NAME} 
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp 
                    ${apps_SRCS} 
    )
    target_link_libraries(${PROJECT_NAME} ${Json})
elseif(WIN32)
    add_executable( ${PROJECT_NAME}
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp 
                    ${apps_SRCS} 
                    )
    target_link_libraries(${PROJECT_NAME} ${Json})
endif()