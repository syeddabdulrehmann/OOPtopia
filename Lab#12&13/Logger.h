#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Logger {
public:
    void log(const T &message) {
        cout << "[LOG]: " << message << std::endl;
    }
};



