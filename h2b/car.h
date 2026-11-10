#ifndef CAR_H
#define CAR_H
#include <QString>
class Car
{
public:
    Car(QString brand, QString model, int yearModel);
    void printData() const;

private:
    QString brand;
    QString model;
    int yearModel;
};

#endif
