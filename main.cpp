#include "app.h"

int main(int argc, char const *argv[])
{
    App application;
    if ( application.init() )
        application.start();
    return 0;
}
