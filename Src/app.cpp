#include "app.h"
#include <iostream>
#include <fstream>
#include <Lib/Json/json.hpp>



App::App(){
    ;
}

App::~App(){

}

bool App::init(){
    // init modbus config and connection config
    std::ifstream config;
	nlohmann::json serialize_data;
	try {
		config.open( "config.json", std::ifstream::in );
	}
	catch( std::ifstream::failure e ) {
		std::cerr << "Exception opening/reading/closing file\n";
		config.close();
		return false;
	}
	config >> serialize_data;
	std::cout << serialize_data;


    return true;
}

void App::start(){

    while(true)
    {
        //main loop
    }
}