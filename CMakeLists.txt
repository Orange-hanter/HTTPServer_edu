project("OPC_SERVER")
if ( UNIX )
    message("Using sistem is UNIX!")
    cmake_minimum_required(VERSION 3.10.0)
elseif(WIN32)
    cmake_minimum_required(VERSION 3.13.1)
endif()

message(" ")
message("Lets GO Rok&Roll!")
message(" ")

set(HEADERS 
    ${HEADERS} 
    ${CMAKE_CURRENT_SOURCE_DIR}/app.h)

set(SOURCES 
    ${SOURCES} 
    ${CMAKE_CURRENT_SOURCE_DIR}/app.cpp)

link_directories( ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(libs/json)
find_package(nlohmann_json REQUIRED)
add_library(foo ...)
target_link_libraries(foo PRIVATE nlohmann_json::nlohmann_json)


add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main ${SOURCES} ${HEADERS})