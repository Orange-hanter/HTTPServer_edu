if ( UNIX )
    message("Using sistem is UNIX!")
    cmake_minimum_required(VERSION 3.10.0)
elseif(WIN32)
    cmake_minimum_required(VERSION 3.13.1)
endif()

message("Lets GO Rok&Roll!")

project(OPC_SERVER)

add_executable(OPC_SERVER main.cpp)
