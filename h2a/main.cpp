#include "car.h"
#include <iostream>
#include "car.h"
#include "rectangle.h"
#include <memory>
#include "student.h"

int main(){
    Car auto1;
    auto1.setBrand("BMW");
    auto1.setModel("430d");
    auto1.setYearModel(2019);
    auto1.printData();


    std::cout << std::endl;

    Rectangle *suorakulmio = new Rectangle;
    suorakulmio->setWidth(4.5);
    suorakulmio->setHeight(2.0);
    std::cout << "Pinta-ala: " << suorakulmio->getArea() << std::endl;
    std::cout << "Piiri: " << suorakulmio->getCircum() << std::endl;
    delete suorakulmio;
    suorakulmio = nullptr;

    std::cout << std::endl;

    std::unique_ptr<Student> opiskelija = std::make_unique<Student>();
    opiskelija->setName("Emil Halonen");
    opiskelija->setStudentNumber(123456);
    opiskelija->setAverage(4.2);
    std::cout << "Nimi: " << opiskelija->getName() << std::endl;
    std::cout << "Opiskelijanumero: " << opiskelija->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << opiskelija->getAverage() << std::endl;

    return 0;
}
