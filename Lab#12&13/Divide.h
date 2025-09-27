#include <iostream>
#include <stdexcept>
using namespace std;

// Function to handle divide by zero
double safeDivide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero!");
    }
    return a / b;
}



