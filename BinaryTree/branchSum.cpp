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

vector<int> branchSums(BinaryTree *root) {
  void helper(vector<int> &sums, BinaryTree *root, int sum);
  vector<int> sums;
  helper(sums, root, 0);
  return sums;
}

void helper(vector<int> &sums, BinaryTree *root, int sum){
  if (root == nullptr){
    return;
  }
  int newSum = sum + root->value;
  if (root->left == NULL && root->right == NULL){
    sums.push_back(newSum);
    return;
  }
    helper(sums, root->left, newSum);
    helper(sums, root->right, newSum);
}

