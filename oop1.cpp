#include <iostream>
#include "Rectangle.hpp"


int main()
{
    Rectangle Rectangle1;
    std::cout << "Perimeter 1: " << Rectangle1.perimeter() << std::endl;
    std::cout << "Area 1: " << Rectangle1.area() << std::endl;

    Rectangle rect2(1.0, 3.0, 5.0, 4.0);
    std::cout << "Perimeter 2: " << rect2.perimeter() << std::endl;
    std::cout << "Area 2: " << rect2.area() << std::endl;
}