// Find the nodes with minimum and maximum value in a Binary Search Tree.

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to find the minimum value node in the BST
TreeNode* findMin(TreeNode* root) {
    // The minimum value node is the leftmost node
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

// Function to find the maximum value node in the BST
TreeNode* findMax(TreeNode* root) {
    // The maximum value node is the rightmost node
    while (root && root->right) {
        root = root->right;
    }
    return root;
}

// Helper function to insert a node into the BST (for testing)
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

    // Find the minimum and maximum values in the BST
    TreeNode* minNode = findMin(root);
    TreeNode* maxNode = findMax(root);

    // Output the results
    if (minNode) {
        cout << "Minimum value in the BST: " << minNode->val << endl;
    } else {
        cout << "The tree is empty." << endl;
    }

    if (maxNode) {
        cout << "Maximum value in the BST: " << maxNode->val << endl;
    } else {
        cout << "The tree is empty." << endl;
    }

    return 0;
}
