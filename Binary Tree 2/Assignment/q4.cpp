// Zigzag Level Order Traversal [LeetCode 103]

#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform Zigzag Level Order Traversal using Queue
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == nullptr) {
        return result;  // If the tree is empty, return an empty result
    }

    // Create a queue for level order traversal
    queue<TreeNode*> q;
    q.push(root);

    // A flag to keep track of the direction (left-to-right or right-to-left)
    bool leftToRight = true;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> levelValues;

        // Process all nodes at the current level
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            // Add the node's value to the level's vector
            levelValues.push_back(currentNode->val);

            // Enqueue the left and right children of the current node
            if (currentNode->left != nullptr) {
                q.push(currentNode->left);
            }
            if (currentNode->right != nullptr) {
                q.push(currentNode->right);
            }
        }

        // If the direction is right-to-left, reverse the level values
        if (!leftToRight) {
            reverse(levelValues.begin(), levelValues.end());
        }

        // Add the current level to the result
        result.push_back(levelValues);

        // Toggle the direction for the next level
        leftToRight = !leftToRight;
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
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = createTree();

    // Perform Zigzag Level Order Traversal
    vector<vector<int>> result = zigzagLevelOrder(root);

    cout << "Zigzag Level Order Traversal of the Binary Tree:" << endl;
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
