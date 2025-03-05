//Print first ‘n’ fibonacci numbers.
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of Fibonacci terms
    cout << "Enter the number of Fibonacci numbers to print: ";
    cin >> n;

    // Handle the case where n is 1 or less
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program if n is non-positive
    }

    // First two Fibonacci numbers
    long long a = 0, b = 1;

    // Print the Fibonacci sequence
    cout << "The first " << n << " Fibonacci numbers are: " << endl;
    
    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        // Update to the next Fibonacci number
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl; // Print a newline after the sequence
    return 0;
}
