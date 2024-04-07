#include "Circle.h"
#include <iostream>

Circle::Circle() : radius(0) {
    name = "Circle";
}

float Circle::area() const {
    return 3.14 * radius * radius;
}

float Circle::perimeter() const {
    return 2 * 3.14 * radius;
}

void Circle::input() {
    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
}

void Circle::output() const {
    std::cout << "Circle - Radius: " << radius << std::endl;
}

const std::string& Circle::getName() const {
    return name;
}
