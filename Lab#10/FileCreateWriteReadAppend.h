

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileCreateWriteReadAppend {
public:

    
    void createAndWriteFile() {
        ofstream outFile("notes.txt");
        if (outFile.is_open()) {
            outFile << "This is the first line of text." << endl;
            outFile << "This is the second line of text." << endl;
            outFile << "This is the third line of text." << endl;
            outFile.close();
            cout << "File created and three lines written successfully." << endl;
        } else {
            cout << "Error creating file!" << endl;
        }
    }
    
    void readAndDisplayFile() {
        cout << "\nReading file contents:" << endl;
        ifstream inFile("notes.txt");
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        } else {
            cout << "Error reading file!" << endl;
        }
    }
    
    void appendToFile() {
        ofstream appFile("notes.txt", ios::app);
        if (appFile.is_open()) {
            appFile << "Name: Feeza Kulsoom" << endl;
            appFile << "Roll Number: 202403" << endl;
            appFile.close();
            cout << "\nName and roll number appended successfully." << endl;
        } else {
            cout << "Error appending to file!" << endl;
        }
    }
    
    void displayFinalContent() {
        cout << "\nFinal file contents:" << endl;
        ifstream finalFile("notes.txt");
        if (finalFile.is_open()) {
            string line;
            while (getline(finalFile, line)) {
                cout << line << endl;
            }
            finalFile.close();
        }
    }
    
        void execute() {
        cout << "\n=== Task 1: Create, Write, Read, and Append a File ===" << endl;
        
        createAndWriteFile();
        readAndDisplayFile();
        appendToFile();
        displayFinalContent();
    }
};

