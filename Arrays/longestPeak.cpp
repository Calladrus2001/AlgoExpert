#include <iostream>
#include <vector>
using namespace std;

int longestPeakHelper(int idx, vector<int> array);
int longestPeak(vector<int> array);

int longestPeak(vector<int> array)
{
  int longest = 0;
  for (int i = 1; i < array.size()-1; i++)
  {
    if (array[i-1] >= array[i] || array[i+1] <= array[i]){
      continue;
    }
    int peak = longestPeakHelper(i, array);
    peak > longest ? longest = peak : peak;
  }
  return longest;
}

int longestPeakHelper(int idx, vector<int> array)
{
  int left, right = idx;
  int peak = 0;
  while (left > 0)
  {
    left -= 1;
    if (array[left] < array[left + 1])
    {
      peak == 0 ? peak = 2 : peak += 1;
      cout << array[idx] << ": "<< peak << " " << array[left];
    }
    else
    {
      break;
    }
  }
  while (right < array.size() - 1)
  {
    right += 1;
    if (array[right] < array[right - 1])
    {
      peak == 0 ? peak = 2 : peak += 1;
      cout << array[idx] << ": "<< peak << " " << array[right] << endl;
    }
    else
    {
      break;
    }
  }

  return peak;
}/

int main()
{
  vector<int> query = {1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3};
  int res = longestPeak(query);
  cout << res << endl;
}