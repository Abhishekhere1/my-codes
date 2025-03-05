// WAP to find the difference between ASCII of two characters ,take them as input .

#include <iostream>
using namespace std;

int main() {
    char char1, char2;

    // Input two characters
    cout << "Enter the first character: ";
    cin >> char1;

    cout << "Enter the second character: ";
    cin >> char2;

    // Find ASCII values and calculate the difference
    int ascii1 = static_cast<int>(char1);  // Convert char1 to its ASCII value
    int ascii2 = static_cast<int>(char2);  // Convert char2 to its ASCII value

    int difference = abs(ascii1 - ascii2);  // Absolute difference

    // Output the result
    cout << "The ASCII difference between '" << char1 << "' and '" << char2 << "' is: " << difference << endl;

    return 0;
}
