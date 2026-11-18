#include "chef.h"
#include <iostream>

Chef::Chef(std::string n){
    name = n;
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef(){
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad(){
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup(){
    std::cout << "Chef " << name << " makes soup" << std::endl;
}