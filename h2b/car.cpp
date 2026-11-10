#include "car.h"
#include <QDebug>

Car::Car(QString brand, QString model, int yearModel)
    :brand(brand), model(model), yearModel(yearModel)
{
}

void Car::printData() const
{
    qDebug().noquote()
        << "Merkki: " << brand
        << "Malli: " << model
        << "Vuosimalli: " << yearModel;
}