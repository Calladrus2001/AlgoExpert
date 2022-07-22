#include <iostream>
using namespace std;

class BST
{
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

bool validateHelper(BST *tree, int min, int max);

bool validateBst(BST *tree)
{
  return validateHelper(tree, INT_MIN, INT_MAX);
}

bool validateHelper(BST *tree, int max, int min)
{
  if (tree->value < min || tree->value >= max)
  {
    return false;
  }
  if (tree->left != nullptr && !validateHelper(tree->left, min, tree->value))
  {
    return false;
  }
  if (tree->right != nullptr && !validateHelper(tree->right, tree->value, max))
  {
    return false;
  }
  return true;
}
