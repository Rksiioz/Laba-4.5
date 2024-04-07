#pragma once

#include "Shape.h"

class Trapezium : public Shape {
private:
    std::string name;
    float a;
    float b;
    float h;
public:
    Trapezium();

    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
    const std::string& getName() const override;
};
