// Next Greater Node in Linked List [Leetcode - 1019]

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

vector<int> nextLargerNodes(ListNode* head) {
    vector<int> result;  // To store the next greater elements
    stack<pair<int, int>> st;  // Stack to store pairs of (index, value)
    ListNode* curr = head;
    int index = 0;

    // Traverse the list and store the values in the result
    while (curr != nullptr) {
        result.push_back(curr->val);
        curr = curr->next;
    }

    // Process the list from right to left
    for (int i = result.size() - 1; i >= 0; --i) {
        // While the stack is not empty and the top of the stack is less than or equal to current element
        while (!st.empty() && st.top().second <= result[i]) {
            st.pop();  // Pop all smaller elements
        }

        // If the stack is not empty, the top element is the next greater element
        if (!st.empty()) {
            result[i] = st.top().second;
        } else {
            result[i] = 0;  // No next greater element found
        }

        // Push the current element onto the stack
        st.push({i, result[i]});
    }

    return result;
}

int main() {
    // Create a sample linked list: 2 -> 1 -> 5
    ListNode* head = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(5);

    vector<int> result = nextLargerNodes(head);

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
