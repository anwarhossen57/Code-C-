#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ofstream MyWriteFile("filename.txt");
    MyWriteFile << "Files can be easy, but here is no enough teachable";
    MyWriteFile.close();
    string myText;

    ifstream MyReadFile("filename.txt");

    while(getline (MyReadFile, myText)){
        cout << myText;
    }
    MyReadFile.close();

}