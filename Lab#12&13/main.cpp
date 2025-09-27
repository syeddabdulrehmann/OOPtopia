#include <iostream>
#include "divide.h"
#include "safe_array.h"
#include "calculator.h"
#include "logger.h"
using namespace std;

int main() {
    Logger<string> logger;

    // ===== Task 1: Divide by Zero =====
    try {
        cout << "Task 1: Division" << endl;
        double result = safeDivide(10, 0);
        cout << "Result: " << result << endl;
    } catch (exception &e) {
        logger.log(e.what());
    }

    // ===== Task 2: Safe Array =====
    try {
        cout << "\nTask 2: Safe Array" << endl;
        SafeArray arr;
        int index, value;
        cout << "Enter index (0-2): ";
        cin >> index;
        cout << "Enter value: ";
        cin >> value;
        arr.setValue(index, value);
        cout << "Stored value at index " << index << " = " << arr.getValue(index) << endl;
    } catch (exception &e) {
        logger.log(e.what());
    }

    // ===== Task 3: Calculator =====
    try {
        cout << "\nTask 3: Calculator" << endl;
        Calculator<double> calc;
        cout << "5 + 3 = " << calc.add(5, 3) << endl;
        cout << "5 - 3 = " << calc.subtract(5, 3) << endl;
        cout << "5 * 3 = " << calc.multiply(5, 3) << endl;
        cout << "5 / 0 = ";
        cout << calc.divide(5, 0) << endl; // Will throw error
    } catch (exception &e) {
        logger.log(e.what());
    }

    // ===== Task 4: Logger =====
    cout << "\nTask 4: Logger" << endl;
    logger.log("Program executed successfully!");

    return 0;
}
