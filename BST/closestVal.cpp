#include <iostream>
#include <vector>
#include <cstdlib>
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

int curr_val = 0;

int findClosestValueInBst(BST *tree, int target)
{
    int findClosestValueInBstHelper(BST *tree, int target, int closest);
    return findClosestValueInBstHelper(tree, target, tree->value);
}

int findClosestValueInBstHelper(BST *tree, int target, int closest){
    BST *curr_node = tree;
    while (curr_node != nullptr){
        if (abs(target - closest) > abs(target - curr_node->value)){
            closest = curr_node->value;
        }
        if (target < curr_node->value){
            curr_node = curr_node->left;
        }
        else if (target > curr_node->value){
            curr_node = curr_node->right;
        }
        else {
            break;
        }
    }
    return (int) closest;
}