#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int i = 0;
  int j = array.size() - 1;
  while (i < j){
    while (i < j && array[j] == toMove){
      j --;
    }
    if (array[i] == toMove){
      swap(array[i], array[j]);
    }
    i++;
  }
  return array;
}

int main(){
  vector<int> arr = {2, 1, 2, 2, 2, 3, 4, 2};
  arr = moveElementToEnd(arr, 2);
  for (int i = 0; i < arr.size(); i ++){
    cout << arr[i] << " ";
  }
}