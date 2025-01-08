#include <iostream>
using namespace std;

enum Level {
    LOW = 25,
    MEDIUM = 70,
    HIGH = 80
}; 

int main() {
    enum Level myVar = LOW;
    cout << myVar;
    return 0;
}
