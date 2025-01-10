#include <iostream>

using namespace std;

class MyClass {
    public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};
class MyChild: public MyClass {
};
class MyGrandchild: public MyChild {

};

int main(){
    MyGrandchild myObj;
    myObj.myFunction();
    return 0;
}