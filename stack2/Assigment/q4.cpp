// Next Greater Element II [Leetcode - 503]

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);  // Initialize result array with -1
    stack<int> st;  // Stack to store indices of elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        // Check if the current element is greater than the element at the index stored at the top of the stack
        while (!st.empty() && nums[st.top()] < nums[i]) {
            int index = st.top();  // Get the index of the element whose next greater element is found
            st.pop();  // Pop the index from the stack
            result[index] = nums[i];  // Update the result for that element
        }
        // Push the current index onto the stack
        st.push(i);
    }

    return result;  // Return the result array
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};  // Sample input
    vector<int> result = nextGreaterElement(nums);
    
    // Output the result
    cout << "Next Greater Elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
