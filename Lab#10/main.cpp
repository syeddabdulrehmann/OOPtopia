#include <iostream>
#include "FileCreateWriteReadAppend.h"
#include "CountFileLines.h"
#include "CopyFileContent.h"
#include "StudentDetailsFile.h"

using namespace std;

int main() {
    cout << "File Handling Tasks in C++" << endl;
    cout << "==========================" << endl;
    
    // Execute Task 1
    FileCreateWriteReadAppend task1;
    task1.execute();
    
    // Execute Task 2
    CountFileLines task2;
    task2.execute();
    
    // Execute Task 3
    CopyFileContent task3;
    task3.execute();
    
    // Execute Task 4
    StudentDetailsFile task4;
    task4.execute();
    
    cout << "\nAll tasks completed successfully!" << endl;
    return 0;
}
