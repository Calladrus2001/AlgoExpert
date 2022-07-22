#include<iostream>
#include<vector>
using namespace std;

using namespace std;

// This is an input class. Do not edit.
class BST {
public:
  int value;
  BST *left = nullptr;
  BST *right = nullptr;

  BST(int value) { this->value = value; }
};

int findKthLargestValueInBst(BST *tree, int k) {
  void inOrder(BST *tree, vector<int> &elements);
  vector<int> elements;
  inOrder(tree, elements);
  return elements[elements.size() - k];
}

void inOrder(BST *tree, vector<int> &elements){
  if (tree == nullptr){
    return;
  }
  inOrder(tree->left, elements);
  elements.push_back(tree->value);
  inOrder(tree->right, elements);
}
