#include <iostream>
using namespace std;

int main() {
    int ages[8] = {10,23,34,30,40,50,60,70};

    float avg, sum = 0;
    int i;

    int length = sizeof(ages)/sizeof(ages[0]);

    for (int age : ages) {
        sum += age;
    
    }
    avg = sum/length;
    cout<<"The average age is : " << avg <<"\n";
    return 0;
}