#include "Trapezium.h"
#include <iostream>
#include <cmath>

Trapezium::Trapezium() : a(0), b(0), h(0) {
    name = "Trapezium";
}

float Trapezium::area() const {
    return (a + b) * h / 2;
}

float Trapezium::perimeter() const {
    return a + b + 2 * sqrt(pow((b - a) / 2, 2) + h * h);
}

void Trapezium::input() {
    std::cout << "Enter the lengths of the bases and the height of the trapezium: ";
    std::cin >> a >> b >> h;
}

void Trapezium::output() const {
    std::cout << "Trapezium - Base a: " << a << ", Base b: " << b << ", Height: " << h << std::endl;
}

const std::string& Trapezium::getName() const {
    return name;
}
