#include <iostream>
using namespace std;

float toCelsius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit - 32.0);
}

int main(){
    float f_value =  98.8;
    float result = toCelsius(f_value);

    cout <<"Fahrenheit : " <<f_value <<"\n";
    cout <<"Convert Fahrenheit to Celsius : " << result <<"\n";

    return 0;
} 
