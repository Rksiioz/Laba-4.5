#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"
#include <iostream>

void printInfo(const Shape &shape) {
    std::cout << "Figure Type: " << shape.getName() << std::endl;
    std::cout << "Area: " << shape.area() << std::endl;
    std::cout << "Perimeter: " << shape.perimeter() << std::endl;
}


int main() {
    Rectangle rectangle;
    Circle circle;
    Trapezium trapezium;

    Shape *ptr1 = &rectangle;
    Shape *ptr2 = &circle;
    Shape *ptr3 = &trapezium;

    ptr1->input();
    ptr1->output();
    printInfo(*ptr1);

    ptr2->input();
    ptr2->output();
    printInfo(*ptr2);

    ptr3->input();
    ptr3->output();
    printInfo(*ptr3);

    return 0;
}

