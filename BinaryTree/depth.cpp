#include<iostream>
#include<vector>
using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int nodeDepths(BinaryTree *root) {
  void Inorder(BinaryTree* root, int &sum, int pos);
  int sum = 0;
  Inorder(root, sum, 0);
  return sum;
}

void Inorder(BinaryTree* root, int &sum, int pos){
  if (root == nullptr){
    return;
  }
  int curr_depth = pos + 1;
  sum += curr_depth;
  Inorder(root->left, sum,curr_depth);
  Inorder(root->right, sum, curr_depth);
}
