#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results)
{
    unordered_map<string, int> winners;
    int maxScore = INT_MIN;
    string winner;
    for (int i = 0; i < competitions.size(); i++)
    {
        if (results[i] == 0)
        {
            winners[competitions[i][1]] += 3;
            if (winners[competitions[i][1]] > maxScore){
                maxScore = winners[competitions[i][1]];
                winner = competitions[i][1];
            }
        }
        else if (results[i] == 1){
            winners[competitions[i][0]] += 3;
            if (winners[competitions[i][0]] > maxScore){
                maxScore = winners[competitions[i][0]];
                winner = competitions[i][0];
            }
        }
    }
    return winner;
}
