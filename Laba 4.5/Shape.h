#pragma once

#include <string>

class Shape {
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
    virtual void input() = 0;
    virtual void output() const = 0;
    virtual const std::string& getName() const = 0;
    virtual ~Shape() {}
};
