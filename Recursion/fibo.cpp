#include<iostream>
#include<vector>
using namespace std;

int getNthFib(int n) {
  int prevFib = 0;
  int thisFib = 1;
  int nextFib;
  if (n == 1){
    return prevFib;
  }
  else if (n==2){
    return thisFib;
  }
  while (n > 2){
    nextFib = prevFib + thisFib;
    prevFib = thisFib;
    thisFib = nextFib;
    n -= 1;
  }
  return nextFib;
}

int main(){
  int res = getNthFib(6);
  cout << res << endl;
}