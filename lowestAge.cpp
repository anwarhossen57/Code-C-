#include <iostream>
using namespace std;

int main() {
    int ages[8] = {10,23,34,30,40,50,60,70};

    int i;

    int length = sizeof(ages)/sizeof(ages[0]);
    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age){
            lowestAge = age;
        }
    }
    cout<<"The lowest age is : " << lowestAge <<"\n";
    return 0;
}