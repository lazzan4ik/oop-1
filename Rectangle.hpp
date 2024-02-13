#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(double newX, double newY, double newLength, double newWidth);
    double perimeter();
    double area();

private:
    double x{ 0.0 }; // left-bottom angle dot
    double y{ 0.0 };
    double length{ 2.0 };
    double width{ 1.0 };
};

#endif