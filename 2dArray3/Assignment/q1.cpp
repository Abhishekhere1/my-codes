// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1


#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Flags to check if the first row or first column should be zeroed
    bool firstRowZero = false;
    bool firstColZero = false;

    // Check if the first row contains any zeros
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Check if the first column contains any zeros
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Use the first row and first column to mark the rows and columns to be zeroed
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // Mark the first element of the row
                matrix[0][j] = 0; // Mark the first element of the column
            }
        }
    }

    // Set the zeros based on the markers in the first row and first column
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Zero out the first row if needed
    if (firstRowZero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Zero out the first column if needed
    if (firstColZero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    // Output the result
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
