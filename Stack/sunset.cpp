#include<iostream>
#include<vector>
using namespace std;

vector<int> sunsetViews(vector<int> buildings, string direction) {
  vector<int> build = {};
  if (direction == "EAST"){
    int minheight = 0;
  for (int i= 0; i < buildings.size(); i++){
    if (build.size() == 0){
      build.push_back(i);
      minheight = buildings[i];
    }
    else {
      if (buildings[i] < minheight){
        build.push_back(i);
        minheight = buildings[i];
      }
      else {
        while (buildings[i] >= buildings[build[build.size() - 1]]){
          build.pop_back();
          if (build.size() == 0){
            break;
          }
        }
        build.push_back(i);
        minheight = buildings[i];
      }
    }
  }
  return build;
  }
  else {
    int maxheight = 0;
    for (int i = 0; i < buildings.size(); i++){
      if (build.size() == 0){
        build.push_back(i);
        maxheight = buildings[i];
      }
      else {
        if (buildings[i] > maxheight){
          build.push_back(i);
          maxheight = buildings[i];
        }
      }
    }
    return build;
  }
}

int main(){
  vector<int> buildings = {3, 5, 4, 4, 3, 1, 3, 2};
  vector<int> ans = sunsetViews(buildings, "WEST");
  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }
}