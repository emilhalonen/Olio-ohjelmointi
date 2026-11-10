#include "student.h"

std::string Student::getName() const{
    return name;
}

void Student::setName(const std::string &newName){
    name = newName;
}

int Student::getStudentNumber() const{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber){
    studentNumber = newStudentNumber;
}

double Student::getAverage() const{
    return average;
}

void Student::setAverage(double newAverage){
    average = newAverage;
}