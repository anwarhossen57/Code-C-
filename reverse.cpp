#include <iostream>
using namespace std;
int main () {
    int numbers = 123456;
    int revNumber = 0;
    while (numbers) {
        revNumber = revNumber * 10 + numbers % 10;

        numbers /= 10;
    }
    cout << "Reversed numbers : " << revNumber <<endl;
    return 0;
}