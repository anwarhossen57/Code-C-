#include <iostream>
using namespace std;
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}int main(){
    int firstNum = 10;
    int secondNum = 30;
    cout << "Before swap : " <<"\n";
    cout << firstNum << secondNum << "\n";
    swapNums(firstNum, secondNum);
    
    cout << "After swap : " <<endl;
    cout << firstNum << secondNum << "\n";

    return 0;
}