#include "Rectangle.h"

Rectangle::Rectangle():length(0),width(0)
{
}

Rectangle::Rectangle(float L, float W):length(L),width(W)
{
}

float Rectangle::displayArea(void)
{
    return (length * width);
}

float Rectangle::displayCircum(void)
{
    return ((length + width) + 2);
}

void Rectangle::setLength(float L)
{
    length = L;
}

float Rectangle::getLength(void)
{
    return length;
}

void Rectangle::setWidth(float W)
{
    width = W;
}

float Rectangle::getWidth(void)
{
    return width;
}
