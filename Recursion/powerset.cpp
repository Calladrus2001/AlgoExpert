#include <vector>
using namespace std;

vector<int> arr;

vector<vector<int>> powerset(vector<int> array) {
  void Helper(int idx, vector<int> &array, vector<vector<int>> &perms);
  vector<vector<int>> perms;
  Helper(0, array, perms);
  return perms;
}

void Helper(int idx, vector<int> &array, vector<vector<int>> &perms){
  if (idx >= array.size()){
    perms.push_back(arr);
    return;
  }
  arr.push_back(array[idx]);
  Helper(idx+1, array, perms);
  arr.pop_back();
  Helper(idx+1, array, perms);
}