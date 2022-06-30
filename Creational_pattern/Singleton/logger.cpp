#include <iostream>
#include "logger.hpp"

using namespace std;

Logger::Logger(){
    cout<<"New instance created";
}

void Logger::Log(string msg){
    cout<<msg<<endl;
}
