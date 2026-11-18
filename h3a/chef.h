#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef{
public:
    Chef(std::string n);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    std::string name;
};

#endif
