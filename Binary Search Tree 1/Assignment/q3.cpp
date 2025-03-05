// Given the root of a binary search tree, return a balanced BST with the same node values.
// [Leetcode 1382]


#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform inorder traversal of the BST and store the values
void inorderTraversal(TreeNode* root, vector<int>& nodes) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left, nodes);
    nodes.push_back(root->val);
    inorderTraversal(root->right, nodes);
}

// Function to build a balanced BST from the sorted array of values
TreeNode* sortedArrayToBST(vector<int>& nodes, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    // Choose the middle element to maintain balance
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nodes[mid]);

    // Recursively build the left and right subtrees
    root->left = sortedArrayToBST(nodes, start, mid - 1);
    root->right = sortedArrayToBST(nodes, mid + 1, end);

    return root;
}

// Function to balance the BST
TreeNode* balanceBST(TreeNode* root) {
    vector<int> nodes;
    
    // Step 1: Inorder traversal to get sorted values
    inorderTraversal(root, nodes);

    // Step 2: Build a balanced BST using the sorted values
    return sortedArrayToBST(nodes, 0, nodes.size() - 1);
}

// Helper function to print the inorder traversal of the tree (for testing)
void inorderPrint(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

// Helper function to insert nodes into the BST (for testing)
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
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 13);
    root = insert(root, 18);

    // Print inorder traversal of the original BST
    cout << "Inorder traversal of the original BST: ";
    inorderPrint(root);
    cout << endl;

    // Balance the BST
    TreeNode* balancedRoot = balanceBST(root);

    // Print inorder traversal of the balanced BST
    cout << "Inorder traversal of the balanced BST: ";
    inorderPrint(balancedRoot);
    cout << endl;

    return 0;
}
