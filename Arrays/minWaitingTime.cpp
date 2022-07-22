#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumWaitingTime(vector<int> queries)
{
    sort(queries.begin(), queries.end());
    int wait = 0;
    int sum = 0;
    for (int i = 1; i < queries.size(); i++)
    {
       sum += queries[i-1];
       wait += sum;
    }
    return wait;
}

int main()
{
    int res = minimumWaitingTime({3, 2, 1, 2, 6});
    cout << res << endl;
}