#include <iostream>
using namespace std;

class BinaryTree
{
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;

  BinaryTree(int value) { this->value = value; }
};

bool heightBalancedBinaryTree(BinaryTree *tree)
{
  int height(BinaryTree * node);
  if (tree == nullptr)
  {
    return true;
  }
  int lh = height(tree->left);
  int rh = height(tree->right);

  if (heightBalancedBinaryTree(tree->left) && heightBalancedBinaryTree(tree->right) && abs(lh - rh) < 1)
  {
    return true;
  }
  else
  {
    return false;
  }
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
