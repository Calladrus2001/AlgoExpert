#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end());
  int change = 0;
  for (int i = 0; i < coins.size(); i++){
    if (coins[i] > change + 1){
      return change + 1;
    }
    change += coins[i]; 
  }
  return change + 1;
}
