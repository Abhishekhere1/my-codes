// Find the min value in Binary Tree

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node {
public:
int data;
Node *left, *right;
Node(int data){
this->data = data;
this->left = NULL;
this->right = NULL;
}
};
int findMin(Node* root){
if (root == NULL) return INT_MAX;
int res = root->data;
int lres = findMin(root->left);
int rres = findMin(root->right);
if (lres < res) res = lres;
if (rres < res) res = rres;
return res;
}

int main(){
  Node* NewRoot = NULL;
  Node* root = new Node(2);
  root->left = new Node(7);
  root->right = new Node(5);
  root->left->right = new Node(6);
  root->left->right->left = new Node(1);
  root->left->right->right = new Node(11);
  root->right->right = new Node(9);
  root->right->right->left = new Node(4);
  cout << "Minimum element is " << findMin(root) << endl;
  return 0;
  }