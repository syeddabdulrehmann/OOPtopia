// shapes.h


#include <iostream>
using namespace std;

const float PI = 3.1416;

class Shape {
public:
    virtual double area() {
        return 0.0;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void input() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void input() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    double area() override {
        return PI * radius * radius;
    }
};



