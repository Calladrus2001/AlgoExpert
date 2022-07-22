#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int firstDuplicateValue(vector<int> array) {
    unordered_map<int,int> counter;
    for (int i = 0; i < array.size(); i++){
        if (counter[array[i]]==0){
            counter[array[i]] = 1;
        }
        else {
            return array[i];
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2, 1, 5, 2, 3, 3, 4};
    int res = firstDuplicateValue(nums);
    cout << res << endl;
}
