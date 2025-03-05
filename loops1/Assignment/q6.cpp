
// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.


#include <iostream>
using namespace std;

int main() {
    int i = 65;  // ASCII value of 'A' (uppercase)
    
    cout << "ASCII values and their corresponding characters for uppercase alphabets:\n";
    
    // Printing ASCII values and characters for uppercase letters (A-Z)
    while (i <= 90) {
        cout << "ASCII of " << char(i) << " = " << i << endl;
        i++;
    }
    
    i = 97;  // ASCII value of 'a' (lowercase)

    cout << "\nASCII values and their corresponding characters for lowercase alphabets:\n";
    
    // Printing ASCII values and characters for lowercase letters (a-z)
    while (i <= 122) {
        cout << "ASCII of " << char(i) << " = " << i << endl;
        i++;
    }

    return 0;
}
