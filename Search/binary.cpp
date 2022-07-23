#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
  int start = 0; int end = array.size() - 1;
  while (start < end){
    int mid = (start+end)/2;
    if (array[mid] == target){
      return mid;
    }
    else if (array[mid] < target){
      start = mid + 1;
    }
    else {
      end = mid;
    }
  }
  return -1;
}
