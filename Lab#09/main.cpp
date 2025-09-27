#include<iostream>
#include "Count.h"
#include "CountStaticFunc.h"
using namespace std;

// Definition of static members outside the class
int A::count = 0;
int B::count = 0;

int main() {
    cout << "=== Task 1: Static Data Member ===" << endl;
    A a1, a2, a3;
    cout << "Total objects of class A created so far: " << A::count << endl;

    cout << "\n=== Task 2: Static Member Function ===" << endl;
    B b1, b2, b3;
    B::showCount(); // Calling a static member function

    return 0;
}
