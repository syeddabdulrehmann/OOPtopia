// main.cpp
#include<iostream>
#include "shapes.h"
#include "salary_system.h"
using namespace std;


//                                       Task #01


int main() {
    Shape* shapePtr;  // base class pointer

    Rectangle rect;
    Circle circ;

    cout << "=== Rectangle Area Calculation ===\n";
    rect.input();
    shapePtr = &rect;
    cout << "Area of rectangle: " << shapePtr->area() << "\n\n";

    cout << "=== Circle Area Calculation ===\n";
    circ.input();
    shapePtr = &circ;
    cout << "Area of circle: " << shapePtr->area() << "\n";




//                                       Task #02




    Employee* emp;

    PermanentEmployee p(40000, 5000);
    ContractEmployee c(800, 30);

    emp = &p;
    cout << "Permanent Employee Salary: " << emp->calculateSalary() << "\n";

    emp = &c;
    cout << "Contract Employee Salary: " << emp->calculateSalary() << "\n";




    

    return 0;
}


