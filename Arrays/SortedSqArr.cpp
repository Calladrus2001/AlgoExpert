#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// the cheat approach

vector<int> sortedSquaredArray(vector<int> array)
{
    vector<int> soln = {};
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] < 0)
        {
            array[i] = array[i] * -1;
        }
        else if (array[i] >= 0)
        {
            break;
        }
    }
    for (int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); i++)
    {
        soln.push_back(array[i]*array[i]);
    }
    return soln;
}

int main(){
    vector<int> sortedSquaredArray(vector<int> array);
    vector<int> arr1 = {-5,-4,-3,-2,-1};
    vector<int> arr2 = sortedSquaredArray(arr1);
    
}