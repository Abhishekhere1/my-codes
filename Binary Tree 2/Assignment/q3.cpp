// *Level order traversal (Right to Left)

#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform Level Order Traversal (Right to Left) using Queue
void levelOrderTraversalRightToLeft(TreeNode* root) {
    if (root == nullptr) {
        return;  // If the tree is empty, do nothing
    }

    // Create a queue for level order traversal
    queue<TreeNode*> q;

    // Enqueue the root node
    q.push(root);

    while (!q.empty()) {
        // Dequeue the front node
        TreeNode* currentNode = q.front();
        q.pop();

        // Print the value of the current node
        cout << currentNode->val << " ";

        // Enqueue the right child first, then the left child
        if (currentNode->right != nullptr) {
            q.push(currentNode->right);
        }
        if (currentNode->left != nullptr) {
            q.push(currentNode->left);
        }
    }
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

    // Perform Level Order Traversal (Right to Left)
    cout << "Level Order Traversal (Right to Left) of the Binary Tree: ";
    levelOrderTraversalRightToLeft(root); // Expected output: 1 3 2 7 6 5 4

    return 0;
}
