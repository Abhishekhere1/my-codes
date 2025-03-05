// Left View of Binary Tree
// Given a Binary Tree, print the Left view of it.
// The left view of a binary tree refers to the set of nodes that are visible when the tree is viewed
// from the left side.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to print the Left View of the Binary Tree
vector<int> leftView(TreeNode* root) {
    vector<int> result;
    if (root == nullptr) {
        return result;  // If the tree is empty, return an empty result
    }

    // Create a queue for level order traversal
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        // Traverse the current level and pick the first node (leftmost node)
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            // If this is the first node of the level, add it to the result
            if (i == 0) {
                result.push_back(currentNode->val);
            }

            // Enqueue the left and right children of the current node
            if (currentNode->left != nullptr) {
                q.push(currentNode->left);
            }
            if (currentNode->right != nullptr) {
                q.push(currentNode->right);
            }
        }
    }

    return result;
}

// Helper function to create a tree for testing
TreeNode* createTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->left->left = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = createTree();

    // Get the Left View of the Binary Tree
    vector<int> result = leftView(root);

    cout << "Left View of the Binary Tree: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
