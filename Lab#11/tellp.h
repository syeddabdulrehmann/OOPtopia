#include <iostream>
#include <fstream>
using namespace std;

void task1_tellp() {
    cout << "\n=== Task 1: tellp() - Write Pointer Position ===\n";
    fstream out("greet.txt", ios::out);
    cout << "Position of write pointer before writing: " << out.tellp() << endl;

    out << "A";

    cout << "Position of write pointer after writing a single character: "
         << out.tellp() << endl;

    out.close();
}



