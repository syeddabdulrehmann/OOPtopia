#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T subtract(T a, T b) { return a - b; }
    T multiply(T a, T b) { return a * b; }

    T divide(T a, T b) {
        if (b == 0) throw std::runtime_error("Error: Division by zero in calculator!");
        return a / b;
    }
};
