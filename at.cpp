#include <iostream>
using namespace std;

int main() {
    string myString ="Hello";
    cout <<"Original string : " <<myString <<"\n";
    cout <<"First Character : " <<myString.at(0) <<"\n";
    cout <<"Second character : " <<myString.at(1) <<"\n";
    cout <<"Last character : " <<myString.at(myString.length()-1) <<"\n";
    myString.at(0) = 'j';
    cout <<"Changed string : " <<myString;
    return 0;
}