// kth Smallest element in a BST [Leetcode 230]

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Global variable to store the count of visited nodes
int count = 0;
int result = -1;

// Function to perform inorder traversal and find the kth smallest element
void inorder(TreeNode* root, int k) {
    // Base case
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    inorder(root->left, k);
    
    // Increment the count when visiting the current node
    count++;
    
    // If the count equals k, store the result and return
    if (count == k) {
        result = root->val;
        return;
    }
    
    // Traverse the right subtree
    inorder(root->right, k);
}

// Helper function to insert nodes in the BST (for testing)
TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

int main() {
    // Create an empty BST
    TreeNode* root = nullptr;

    // Insert nodes into the BST
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 22);
    root = insert(root, 4);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root, 14);

    // Find the kth smallest element, for example k = 3
    int k = 3;
    inorder(root, k);

    // Output the result
    if (result != -1) {
        cout << "The " << k << "th smallest element in the BST is: " << result << endl;
    } else {
        cout << "The BST does not have " << k << " elements." << endl;
    }

    return 0;
}
