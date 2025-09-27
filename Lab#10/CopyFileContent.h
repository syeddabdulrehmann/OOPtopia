#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class CopyFileContent {
public:

    
    bool copyFile(const char* sourceFile, const char* destFile) {
        ifstream source(sourceFile);
        ofstream dest(destFile);
        
        if (source.is_open() && dest.is_open()) {
            string line;
            while (getline(source, line)) {
                dest << line << endl;
            }
            
            source.close();
            dest.close();
            return true;
        }
        return false;
    }
    
    void verifyCopy() {
        ifstream origFile("notes.txt");
        ifstream copyFile("notes_copy.txt");
        
        if (origFile.is_open() && copyFile.is_open()) {
            int origLines = 0, copyLines = 0;
            string temp;
            
            while (getline(origFile, temp)) origLines++;
            while (getline(copyFile, temp)) copyLines++;
            
            origFile.close();
            copyFile.close();
            
            cout << "Original file lines: " << origLines << ", Copied file lines: " << copyLines << endl;
            cout << "Copy verification: " << (origLines == copyLines ? "SUCCESS" : "FAILED") << endl;
        }
    }
    
        void execute() {
        cout << "\n=== Task 3: Copy Content from One File to Another ===" << endl;
        
        bool success = copyFile("notes.txt", "notes_copy.txt");
        
        if (success) {
            cout << "File copied successfully from notes.txt to notes_copy.txt" << endl;
            verifyCopy();
        } else {
            cout << "Error copying file! Please run Task 1 first." << endl;
        }
    }
};


