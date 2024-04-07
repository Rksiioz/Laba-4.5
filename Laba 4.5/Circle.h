#pragma once

#include "Shape.h"

class Circle : public Shape {
private:
    std::string name;
    float radius;
public:
    Circle();

    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
    const std::string& getName() const override;
};
