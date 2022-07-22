#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  void printList(vector<int> array);
  // function declaration complete

  sort(array.begin(),array.end());
  // printList(array);
  int left, right;
  vector<vector<int>> ans = {};
  for(int i = 0 ; i < array.size()-1; i++){
    int left = i + 1;
    int right = array.size()-1;
    while (left < right){
      int sum = array[i] + array[left] + array[right];
      cout << sum << " ";
      if (sum == targetSum){
        ans.push_back({array[i], array[left], array[right]});
        left += 1;
        right -= 1;
      }
      else if (sum < targetSum){
        left += 1;
      }
      else {
        right -= 1;
      }
    }
  }
  return ans;
}

void printList(vector<int> array){
  for (int i = 0; i < array.size(); i++){
    cout << array[i] << " ";
  }
}

int main(){
  vector<int> array = {12, 3, 1, 2, -6, 5, -8, 6};
  vector<vector<int>> res = threeNumberSum(array, 0);
  for (int i = 0; i < res.size(); i++){
    for (int j = 0; j < 3; j++){
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
}