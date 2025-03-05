// Remove nodes from a linked list. [Leetcode 2487]

#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to remove nodes with a specific value
ListNode* removeNodes(ListNode* head, int value) {
    stack<ListNode*> nodeStack;
    ListNode* current = head;
    
    // Traverse the list and push nodes onto the stack
    while (current) {
        nodeStack.push(current);
        current = current->next;
    }

    // Pop from the stack and rebuild the list, skipping nodes with the specific value
    ListNode* prev = nullptr;
    while (!nodeStack.empty()) {
        ListNode* node = nodeStack.top();
        nodeStack.pop();
        
        if (node->val != value) {
            if (!prev) {
                head = node;
            } else {
                prev->next = node;
            }
            prev = node;
        }
    }
    
    if (prev) {
        prev->next = nullptr; // Set the next pointer of the last node to nullptr
    }

    return head;
}

// Helper function to create a linked list from an array
ListNode* createList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    
    for (int i = 1; i < arr.size(); i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    
    return head;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 6, 3, 4, 5, 6}; // Sample input array
    ListNode* head = createList(arr); // Create the linked list

    cout << "Original list: ";
    printList(head);

    // Remove all nodes with value 6
    head = removeNodes(head, 6);

    cout << "List after removal: ";
    printList(head);

    return 0;
}
