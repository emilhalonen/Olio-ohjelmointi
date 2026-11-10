#ifndef CAR_H
#define CAR_H

#include <string>

class Car{
public:
    void printData();
    void setBrand(std::string b);
    void setModel(std::string m);
    void setYearModel(int y);

private:
    std::string brand;
    std::string model;
    int yearModel;
};

#endif