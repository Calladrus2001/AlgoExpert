#include<iostream>
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

int binaryTreeDiameter(BinaryTree *tree) {
  int height(BinaryTree *node);
  if (tree == NULL){
    return 0;
  }
  int d1 = 1 + height(tree->left) + height(tree->right);
  int d2 = binaryTreeDiameter(tree->left);
  int d3 = binaryTreeDiameter(tree->right);

  return max(d1, max(d2,d3));
}

int height(BinaryTree *node)
{
  if (node == NULL)
  {
    return 0;
  }
  else
  {
    return max(height(node->left), height(node->right)) + 1;
  }
}