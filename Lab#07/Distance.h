#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inch = i;
    }

    // Overloading == operator
    bool operator==(const Distance &d) {
        return (feet == d.feet && inch == d.inch);
    }

    void display() {
        cout << feet << " feet " << inch << " inches" << endl;
    }
};



