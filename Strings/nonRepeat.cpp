#include<iostream>
#include<unordered_map>
using namespace std;

int firstNonRepeatingCharacter(string query) {
  unordered_map<char,int> pos;
  for (int i = 0; i < query.length(); i++){
    pos[query[i]] == 0 ? pos[query[i]] = i + 1: pos[query[i]] = -1;
  }
  for (int i = 0; i < query.length(); i++){
    if (pos[query[i]] != -1){
      return pos[query[i]] - 1;
    }
  }
  return -1;
}
