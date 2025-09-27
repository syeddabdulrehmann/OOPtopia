#include <iostream>
using namespace std;

// Including all tasks
#include "tellp.h"
#include "tellg.h"
#include "seekp.h"
#include "seekg.h"

int main() {
    int choice;
    do {
        cout << "\n========= FILE POINTER TASKS =========\n";
        cout << "1. Task 1: tellp() - Get Write Pointer Position\n";
        cout << "2. Task 2: tellg() - Get Read Pointer Position\n";
        cout << "3. Task 3: seekp() - Move Write Pointer\n";
        cout << "4. Task 4: seekg() - Move Read Pointer\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: task1_tellp(); break;
            case 2: task2_tellg(); break;
            case 3: task3_seekp(); break;
            case 4: task4_seekg(); break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

