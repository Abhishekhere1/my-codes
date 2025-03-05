
// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    // Input the number of terms
    cout << "Enter the number of terms (n): ";
    cin >> n;

    int firstTerm = 3;  // First term of the GP
    int commonRatio = 4;  // Common ratio

    // Loop to print the GP
    for (int i = 0; i < n; i++) {
        // Calculate the current term in the GP
        int term = firstTerm * pow(commonRatio, i);
        
        // Print the current term
        cout << term << " ";
    }

    cout << endl; // Newline after the GP
    return 0;
}
