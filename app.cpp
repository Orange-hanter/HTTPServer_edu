#include "app.h"
#include <nlohmann/json.hpp>

App::App(){
    ;
}

App::~App(){

}

bool App::init(){
    // init modbus config and connection config
    return true;
}

void App::start(){
    while(true)
    {
        //main loop
    }
}