#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(0), height(0) {
    name = "Rectangle";
}

float Rectangle::area() const {
    return width * height;
}

float Rectangle::perimeter() const {
    return 2 * (width + height);
}

void Rectangle::input() {
    std::cout << "Enter width and height of the rectangle: ";
    std::cin >> width >> height;
}

void Rectangle::output() const {
    std::cout << "Rectangle - Width: " << width << ", Height: " << height << std::endl;
}

const std::string& Rectangle::getName() const {
    return name;
}
