#include <iostream>
#include <fstream>
using namespace std;

void task2_tellg() {
    cout << "\n=== Task 2: tellg() - Read Pointer Position ===\n";
    fstream in("greet.txt", ios::in);
    cout << "Position of read pointer before reading: " << in.tellg() << endl;

    char ch;
    in.get(ch);

    cout << "Position of read pointer after reading a single character: "
         << in.tellg() << endl;

    in.close();
}



