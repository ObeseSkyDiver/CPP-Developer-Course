#include "rectangle.h"


Rectangle::Rectangle()
{
    this->length = 1.0;
    this->width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setLength(double length)
{
    this->length = length;

}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::perimeter() const
{
    //Length gets multipled by 2 and width gets multipled by 2 then both get added together.
    return ((length * 2) + (width * 2));
}

double Rectangle::area() const
{
    return length * width;
}