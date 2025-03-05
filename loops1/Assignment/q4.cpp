
// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the number of terms
    cout << "Enter the number of terms (n): ";
    cin >> n;

    int firstTerm = 4;  // First term of the AP
    int commonDifference = 3;  // Common difference

    // Loop to print the AP
    for (int i = 0; i < n; i++) {
        // Calculate the current term in the AP
        int term = firstTerm + i * commonDifference;
        
        // Print the current term
        cout << term << " ";
    }
    
    cout << endl; // Newline after the AP
    return 0;
}
