#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer = vector<int>(score.size(), 0);
    
    map<double, vector<vector<int>>, greater<>> map;
    
    for (int i = 0; i < score.size(); i++)
    {
        double avg = (score[i][0] + score[i][1]) / 2.0;
        map[avg].push_back(score[i]);
    }
    
    int rank = 1;
    for (const auto& pair : map)
    {
        // cout << "avg: " << pair.first << endl;
        for (const auto& v : pair.second)
        {
            // cout << v[0] << " " << v[1] << endl;
            int idx = distance(score.begin(), find(score.begin(), score.end(), v));
            answer[idx] = rank;
        }
        
        rank += pair.second.size();
    }
    
    return answer;
}