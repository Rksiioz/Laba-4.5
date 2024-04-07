#pragma once

#include "Shape.h"

class Rectangle : public Shape {
private:
    std::string name;
    float width;
    float height;
public:
    Rectangle();

    float area() const override;
    float perimeter() const override;
    void input() override;
    void output() const override;
    const std::string& getName() const override;
};
