#include<iostream>
#include<vector>
using namespace std;

bool isMonotonic(vector<int> array) {
  bool isdecreasing = false;
  bool isincreasing = false;
  for (int i = 1; i < array.size(); i++){
    if (array[i] > array[i-1] && isdecreasing == true){
      return false;
    }
    else if (array[i] < array[i-1] && isincreasing == true){
      return false;
    }
    else if (array[i] == array[i-1]){
      continue;
    }
    else if (array[i] > array[i-1]){
      isincreasing = true;
    }
    else {
      isdecreasing = true;
    }
  }
  return true;
}