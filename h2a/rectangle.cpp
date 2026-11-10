#include "rectangle.h"

double Rectangle::getArea(){
    return width*height;
}

double Rectangle::getCircum(){
    return 2 * (width+height);
}

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setHeight(double h){
    height = h;
}

