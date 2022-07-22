#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayOfProducts(vector<int> array)
{
    vector<int> soln; int product = 1;
    for (int i = 0; i < array.size(); i++){
        product *= array[i];
    }
    for (int i = 0; i < array.size(); i++){
        if (product != 0){
            soln.push_back(product/array[i]);
        }
        else {
            soln.push_back(0);
        }
        
    }
    return soln;
}

int main(){
    vector<int> nums = {5, 1, 4, 2};
    vector<int> res = arrayOfProducts(nums);
     for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}