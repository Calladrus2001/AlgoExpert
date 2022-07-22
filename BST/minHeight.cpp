#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }

  void insert(int value) {
    if (value < this->value) {
      if (left == nullptr) {
        left = new BST(value);
      } else {
        left->insert(value);
      }
    } else {
      if (right == nullptr) {
        right = new BST(value);
      } else {
        right->insert(value);
      }
    }
  }
};

BST *minHeightBst(vector<int> arr) {
  BST* minHeightHelper(vector<int> arr, int start, int end, BST* root);
  return minHeightHelper(arr, 0, arr.size()-1, nullptr);
}

BST* minHeightHelper(vector<int> arr, int start, int end, BST* root){
  if (start > end){
    return nullptr;
  }
  int mid = (start + end)/2;
  int value = arr[mid];
  if (root == nullptr){
    root = new BST(value);
  }
  else {
    root->insert(value);
  }
  minHeightHelper(arr, start, mid - 1, root);
  minHeightHelper(arr, mid + 1, end, root);
  return root;
} 
