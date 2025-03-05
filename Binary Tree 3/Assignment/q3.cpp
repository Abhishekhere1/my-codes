// Construct Binary Tree from Inorder & Postorder Traversal [LeetCode 106]

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to build the tree recursively
TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, int& postIndex, unordered_map<int, int>& inorderMap, int left, int right) {
    if (left > right) {
        return nullptr;
    }

    // Get the current root value from postorder (start from the end of the postorder list)
    int rootVal = postorder[postIndex];
    postIndex--; // Move to the next root in postorder

    // Create the root node
    TreeNode* root = new TreeNode(rootVal);

    // Find the index of the root in the inorder list
    int rootIndex = inorderMap[rootVal];

    // Recursively build the right subtree first (because we are processing postorder from the end)
    root->right = buildTreeHelper(inorder, postorder, postIndex, inorderMap, rootIndex + 1, right);

    // Then build the left subtree
    root->left = buildTreeHelper(inorder, postorder, postIndex, inorderMap, left, rootIndex - 1);

    return root;
}

// Function to build the binary tree from inorder and postorder traversals
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    // Create a map to store the index of each element in inorder traversal for quick lookup
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); i++) {
        inorderMap[inorder[i]] = i;
    }

    int postIndex = postorder.size() - 1;  // Start from the last element of postorder
    return buildTreeHelper(inorder, postorder, postIndex, inorderMap, 0, inorder.size() - 1);
}

// Helper function to print the tree in inorder (for testing)
void inorderPrint(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    // Example inorder and postorder traversals
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    // Build the tree
    TreeNode* root = buildTree(inorder, postorder);

    // Print the inorder traversal of the constructed tree (should match the original inorder)
    cout << "Inorder traversal of the constructed tree: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}
