
// Write a program to count the minimum number of notes in a given amount using the switch statement.

// Input 1: 510

// Output1 : notes of “500” = 1 and notes of “10” = 1



#include <iostream>
using namespace std;

void countNotes(int amount) {
    // Array of note denominations
    int notes[] = {500, 100, 50, 10, 5, 2, 1};
    int n = sizeof(notes) / sizeof(notes[0]);
    
    // Loop through the denominations and calculate the count of each note
    for (int i = 0; i < n; i++) {
        int noteCount = amount / notes[i]; // Calculate number of notes of this denomination
        amount = amount % notes[i]; // Update the remaining amount
        
        if (noteCount > 0) {
            switch (notes[i]) {
                case 500:
                    cout << "notes of \"500\" = " << noteCount << endl;
                    break;
                case 100:
                    cout << "notes of \"100\" = " << noteCount << endl;
                    break;
                case 50:
                    cout << "notes of \"50\" = " << noteCount << endl;
                    break;
                case 10:
                    cout << "notes of \"10\" = " << noteCount << endl;
                    break;
                case 5:
                    cout << "notes of \"5\" = " << noteCount << endl;
                    break;
                case 2:
                    cout << "notes of \"2\" = " << noteCount << endl;
                    break;
                case 1:
                    cout << "notes of \"1\" = " << noteCount << endl;
                    break;
            }
        }
    }
}

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    
    countNotes(amount);
    
    return 0;
}
