#include <iostream>
#include "Calculator.h"
#include "Complex.h"
#include "Distance.h"
using namespace std;

int main() {
    cout << "========== Task 1: Calculator (Function Overloading) ==========\n";
    Calculator calc;
    cout << "Sum of 2 integers: " << calc.add(2, 3) << endl;
    cout << "Sum of 2 doubles: " << calc.add(2.5, 3.5) << endl;
    cout << "Sum of 3 integers: " << calc.add(1, 2, 3) << endl;

    cout << "\n========== Task 2: Complex Numbers (Operator Overloading) ==========\n";
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2; // Operator Overloading
    cout << "First Complex: "; c1.display();
    cout << "Second Complex: "; c2.display();
    cout << "Sum: "; c3.display();

    cout << "\n========== Task 3: Distance Equality (Operator Overloading) ==========\n";
    Distance d1(5, 8), d2(5, 8), d3(6, 2);

    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Distance 3: "; d3.display();

    if (d1 == d2)
        cout << "Distance 1 and Distance 2 are equal.\n";
    else
        cout << "Distance 1 and Distance 2 are NOT equal.\n";

    if (d1 == d3)
        cout << "Distance 1 and Distance 3 are equal.\n";
    else
        cout << "Distance 1 and Distance 3 are NOT equal.\n";

    return 0;
}


