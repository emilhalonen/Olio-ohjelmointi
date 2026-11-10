#include "car.h"
#include <QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *arvg[])
{
    QCoreApplication a(argc, arvg);
    QVector<Car> carList;
    carList.append(Car("Mercedes-Benz", "E-Series", 2020));
    carList.append(Car("BMW", "500-Series", 2015));
    carList.append(Car("Porsche", "911 Targa", 2012));

    qDebug()<< "Toinen auto";
    carList[1].printData();

    qDebug() << "\nKaikki autot:";
    for (const Car &car : carList){
        car.printData();
    }
return 0;
}