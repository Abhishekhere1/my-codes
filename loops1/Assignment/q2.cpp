
// Print all numbers from 1 to 100 that are divisible by 3

#include <iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the number is divisible by 3
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl; // To print a newline after the list of numbers
    return 0;
}
