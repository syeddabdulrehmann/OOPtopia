#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class StudentDetailsFile {
public:

    
    bool writeStudentDetails() {
        ofstream outFile("students.txt");
        if (outFile.is_open()) {
            outFile << "Student 1: Feeza, Roll Number: 202403" << endl;
            outFile << "Student 2: Sheeba, Roll Number: 202404" << endl;
            outFile << "Student 3: Batool, Roll Number: 202405" << endl;
            outFile.close();
            cout << "Student details written to students.txt" << endl;
            return true;
        }
        return false;
    }
    
    void readStudentDetails() {
        cout << "\nReading student details:" << endl;
        ifstream inFile("students.txt");
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        } else {
            cout << "Error reading students file!" << endl;
        }
    }
        void execute() {
        cout << "\n=== Task 4: Write Student Details and Then Read Them ===" << endl;
        
        bool writeSuccess = writeStudentDetails();
        if (writeSuccess) {
            readStudentDetails();
        } else {
            cout << "Error creating students file!" << endl;
        }
    }
};
