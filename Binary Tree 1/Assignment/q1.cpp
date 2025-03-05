// Find the product of all values in Binary Tree

#include <bits/stdc++.h>
using namespace std;
class Node{ // This is a TreeNode
public:
int val;
Node* left;
Node* right;
Node(int val){
this->val = val;
this->left = NULL;
this->right = NULL;
}
};
int product(Node* root){
if(root==NULL) return 1;
return root->val * product(root->left) * product(root->right);
}

int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  root->right->left->right = new Node(8);
  int prod = product(root);
  cout << "Product of all the nodes is: " << prod << endl;
  return 0;
  }