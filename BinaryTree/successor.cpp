#include<iostream>
#include<vector>
using namespace std;

using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;
  BinaryTree *parent = nullptr;

  BinaryTree(int value) { this->value = value; }
};

BinaryTree *findSuccessor(BinaryTree *tree, BinaryTree *node) {
  void Inorder(BinaryTree *tree, vector<BinaryTree*> &arr);
  vector<BinaryTree*> arr = {};
  Inorder(tree, arr);
  for (int i = 0; i < arr.size() - 1; i++){
    if (arr[i] == node){
      return arr[i+1];
    }
  }
  return nullptr;
}

void Inorder(BinaryTree *tree, vector<BinaryTree*> &arr){
  if (tree == nullptr){
    return;
  }
  Inorder(tree->left, arr);
  arr.push_back(tree);
  Inorder(tree->right, arr);
}
