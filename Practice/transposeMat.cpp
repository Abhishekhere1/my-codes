#include <bits/stdc++.h>
using namespace std;

// Function to convert mat to its transpose
void transpose(vector<vector<int>>& mat) {
    int n = mat.size(); 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]); 
        }
    }
}

// Driver code
int main() {
    vector<vector<int>> mat = {
        { 1, 1, 1, 1 },
        { 2, 2, 2, 2 },
        { 3, 3, 3, 3 },
        { 4, 4, 4, 4 }
    };

    transpose(mat);

    cout << "Modified matrix is:" << endl;
    for (const auto& row : mat) {
        for (int elem : row) {
            cout << elem << " "; 
        }
        cout << endl; 
    }

    return 0;
}
