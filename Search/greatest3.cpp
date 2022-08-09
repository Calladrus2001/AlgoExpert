#include <vector>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> arr) {
  int first, second, third;
    third = first = second = INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] >= second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
 
        else if (arr[i] > third && arr[i] != second)
            third = arr[i];
    }
 
    return vector<int>{third,second, first};
}
