#include <iostream>
using namespace std;

int main() {
// Number of rows
    int n = 6; 
    
    for(int i = 1; i <= n; i++) {
// Number of characters to print in the current row
        int no_of_chars = 2*i - 1; 
        int space = (n - i);
        for(int k = 0; k < space; k++){
            cout<<" ";
        }
        for(int j = 0; j < no_of_chars; j++) {
// Convert to character
            char ch = (char)('A' + j); 
 // Print the character
            cout << ch; 
        }
// New line after each row
        cout << "\n";  
    }
// loop to print the lower triangle
    for(int i = n + 1; i <= 2*n - 1; i++){
        int space = (i - n);
        for(int k = 0; k < space; k++){
            cout<<" ";
        }
        int no_of_chars = 2*(2*n - i) - 1;
        for(int j = 0; j < no_of_chars; j++){
            cout<<(char)('A' + j);
        }
        cout<<"\n";
    } 
    return 0;
}
