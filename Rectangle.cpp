#include "Rectangle.hpp"

Rectangle::Rectangle(double newX, double newY, double newLength, double newWidth) {
    x = newX;
    y = newY;
    length = newLength;
    width = newWidth;
}

double Rectangle::perimeter() {
    return 2 * (length + width);
}

double Rectangle::area() {
    return length * width;
}