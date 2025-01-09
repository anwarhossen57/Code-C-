#include <iostream>
#include <string>

using namespace std;

class Myclass {
    public:
    int myNum;
    string myString;
};

int main() {
    Myclass myobj;

    myobj.myNum =13;
    myobj.myString = "This MD Anwen Hossen";

    cout << myobj.myNum << "\n";
    cout << myobj.myString << "\n";

    return 0;
} 