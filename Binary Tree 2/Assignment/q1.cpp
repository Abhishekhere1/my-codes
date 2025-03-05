// Diameter of Binary Tree O(n) approach using a user defined data type [LeetCode 543]

#include <iostream>
#include <algorithm> // For std::max
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper class to store the result of the height calculation
class Result {
public:
    int diameter;  // The diameter of the tree
    int height;    // The height of the tree

    Result(int d, int h) : diameter(d), height(h) {}
};

// Function to compute the diameter of a binary tree using post-order traversal
Result diameterOfBinaryTreeHelper(TreeNode* root) {
    if (root == nullptr) {
        return Result(0, 0); // Diameter 0, height 0 for an empty tree
    }

    // Recursively get the result for the left and right subtrees
    Result leftResult = diameterOfBinaryTreeHelper(root->left);
    Result rightResult = diameterOfBinaryTreeHelper(root->right);

    // The height of the current node is the max height of its left or right subtree + 1
    int height = max(leftResult.height, rightResult.height) + 1;

    // The diameter at this node is the sum of the heights of the left and right subtrees
    // The overall diameter is the max of the current diameter and the diameter through this node
    int diameter = max(leftResult.height + rightResult.height,
                        max(leftResult.diameter, rightResult.diameter));

    return Result(diameter, height);
}

// Function to compute the diameter of the binary tree
int diameterOfBinaryTree(TreeNode* root) {
    return diameterOfBinaryTreeHelper(root).diameter;
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

    // Compute the diameter of the tree
    cout << "Diameter of the binary tree: " << diameterOfBinaryTree(root) << endl;

    return 0;
}
