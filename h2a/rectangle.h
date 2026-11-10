#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    double getArea();
    double getCircum();
    void setWidth(double w);
    void setHeight(double h);

private:
    double width;
    double height;
};

#endif
