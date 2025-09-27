#include <iostream>
#include <stdexcept>
using namespace std;

class SafeArray {
private:
    int arr[3];
public:
    SafeArray() {
        for (int i = 0; i < 3; i++) arr[i] = 0;
    }

    void setValue(int index, int value) {
        if (index < 0 || index >= 3) {
            throw std::out_of_range("Error: Index out of bounds!");
        }
        arr[index] = value;
    }

    int getValue(int index) {
        if (index < 0 || index >= 3) {
            throw std::out_of_range("Error: Index out of bounds!");
        }
        return arr[index];
    }
};



