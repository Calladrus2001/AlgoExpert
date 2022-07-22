#include<iostream>
#include<vector>
using namespace std;

class BST {
public:
  int value;
  BST *left = nullptr;
  BST *right = nullptr;

  BST(int value) { this->value = value; }
};

BST *reconstructBst(vector<int> preOrder) {
  if (preOrder.size() == 0){
    return nullptr;
  }

  int curr = preOrder[0];
  int end = preOrder.size() - 1;
  for (int i = 1; i < end; i ++){
    if (preOrder[i] >= curr){
      end = preOrder[i];
      break;
    }
  }
  BST* left = reconstructBst(vector<int>(preOrder.begin() + 1, preOrder.begin() + end));
  BST* right = reconstructBst(vector<int>(preOrder.begin() + end, preOrder.end()));
  BST* bst = new BST(curr);
  bst->left = left;
  bst->right = right;
  return bst;
}