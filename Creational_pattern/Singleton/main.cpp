#include <iostream>
#include "logger.hpp"
using namespace std;

int main(){

    Logger* logger1=new Logger();
    logger1->Log("this is log from user 1");

    Logger* logger2=new Logger();
    logger2->Log("this is log from user 2");

return 0;
    
} 