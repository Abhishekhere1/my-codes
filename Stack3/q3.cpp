// Maximal Rectangle [Leetcode - 85]

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// Function to calculate the area of the largest rectangle in a histogram
int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    heights.push_back(0); // Add a 0 to ensure the stack gets emptied at the end
    int maxArea = 0;

    for (int i = 0; i < heights.size(); ++i) {
        // While the current height is less than the height at the top of the stack
        while (!st.empty() && heights[st.top()] > heights[i]) {
            int h = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, h * width);
        }
        st.push(i);
    }

    return maxArea;
}

// Function to compute the maximal rectangle in the binary matrix
int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty()) return 0;

    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> heights(n, 0);
    int maxArea = 0;

    // Iterate over each row
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            // Update the heights array for each column
            heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
        }

        // Find the maximal area for the histogram (heights) for the current row
        maxArea = max(maxArea, largestRectangleArea(heights));
    }

    return maxArea;
}

int main() {
    // Example input matrix
    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };

    // Calculate the maximal rectangle area
    int result = maximalRectangle(matrix);

    // Output the result
    cout << "Maximal Rectangle Area: " << result << endl;

    return 0;
}
