

// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the integer 'n'
    cout << "Enter an integer to print its multiplication table: ";
    cin >> n;

    // Print the multiplication table for 'n' from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
