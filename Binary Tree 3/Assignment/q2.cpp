// Path Sum I [LeetCode 112]


#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to check if there's a path from root to leaf with the given sum
bool hasPathSum(TreeNode* root, int sum) {
    // If the current node is null, return false
    if (root == nullptr) {
        return false;
    }

    // If we've reached a leaf node, check if the sum matches
    if (root->left == nullptr && root->right == nullptr) {
        return root->val == sum;
    }

    // Otherwise, recursively check the left and right subtrees with the reduced sum
    sum -= root->val;
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}

// Helper function to create a binary tree for testing
TreeNode* createTree() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    return root;
}

int main() {
    TreeNode* root = createTree();
    int targetSum = 22;

    // Check if there's a path with the target sum
    if (hasPathSum(root, targetSum)) {
        cout << "There is a path with the target sum " << targetSum << endl;
    } else {
        cout << "No path exists with the target sum " << targetSum << endl;
    }

    return 0;
}

