#include "car.h"
#include <iostream>

void Car::printData(){
    std::cout << "merkki: " << brand << std::endl;
    std::cout << "malli: " << model << std::endl;
    std::cout<< "vuosimalli: " <<yearModel << std::endl;
}

void Car::setBrand(std::string b){
    brand = b;
}

void Car::setModel(std::string m){
    model = m;
}

void Car::setYearModel(int y){
    yearModel =y;
}
