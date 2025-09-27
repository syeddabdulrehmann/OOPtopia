#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class CountFileLines {
public:
  
    
    int countLinesInFile(const char* filename) {
        ifstream file(filename);
        if (file.is_open()) {
            int lineCount = 0;
            string line;
            
            while (getline(file, line)) {
                lineCount++;
            }
            
            file.close();
            return lineCount;
        }
        return -1;
    }
      void execute() {
        cout << "\n=== Task 2: Count Number of Lines in a File ===" << endl;
        
        int lineCount = countLinesInFile("notes.txt");
        
        if (lineCount >= 0) {
            cout << "Total number of lines in notes.txt: " << lineCount << endl;
        } else {
            cout << "Error opening file! Please run Task 1 first." << endl;
        }
    }
};


