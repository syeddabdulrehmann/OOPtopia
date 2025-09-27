// ===== Shape.h =====


#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw()=0; // Pure abstract function
};

// Derived class CircleShape
class CircleShape : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class RectangleShape
class RectangleShape : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};



