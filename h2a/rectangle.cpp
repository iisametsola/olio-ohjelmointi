#include "rectangle.h"
#include <iostream>

double Rectangle::getArea() const
{
    return width * height;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getCircum() const
{
    return 2 * (width * height);
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}


Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(double width, double height) {

    this->width=width;
    this->height=height;

}
Rectangle::~Rectangle() {
}

void Rectangle::display () const
{}
