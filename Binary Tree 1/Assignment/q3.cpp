// Balanced Binary Tree

#include <iostream>
#include <algorithm>  // For std::max
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to compute the height of a tree
int height(TreeNode* node) {
    if (node == nullptr) {
        return 0;  // Height of an empty tree is 0
    }
    
    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    
    // If the left or right subtree is unbalanced, return -1
    if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
        return -1;  // This indicates that the tree is unbalanced
    }
    
    // Return the height of the current node
    return 1 + max(leftHeight, rightHeight);
}

// Main function to check if the binary tree is balanced
bool isBalanced(TreeNode* root) {
    return height(root) != -1;
}

// Helper function to create a tree for testing
TreeNode* createTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->left->left = new TreeNode(6);
    return root;
}

int main() {
    TreeNode* root = createTree();
    
    // Check if the tree is balanced
    if (isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is unbalanced." << endl;
    }

    return 0;
}
