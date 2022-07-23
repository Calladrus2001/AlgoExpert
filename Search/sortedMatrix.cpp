#include<iostream>
#include<vector>
using namespace std;

vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target) {
  int rowCount = 0; int columnCount = matrix[0].size() - 1;
  while (rowCount < matrix.size() && columnCount >= 0){
    if (matrix[rowCount][columnCount] == target){
      return {rowCount, columnCount};
    }
    else if (matrix[rowCount][columnCount] > target){
      // move left
      columnCount -= 1;
    }
    else {
      // move down
      rowCount += 1;
    }
  }
  return {-1,-1};
}
