#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string n) : Chef(n){
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef(){
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(){
    std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}