#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int correct = 0;
    int zeroCount = 0;
    
    vector<bool> find(lottos.size(), false);
    for (int v : lottos)
    {
        const auto& it = std::find(win_nums.begin(), win_nums.end(), v);
        const int index = distance(win_nums.begin(), it);
        
        if (v == 0)
            zeroCount++;
        
        if (it != win_nums.end() && find[index] == false)
        {
            correct++;
        }
        
        find[index] = true;
    }
    
    
    int min = correct;
    int max = correct + zeroCount;
    
    // cout << min << " " << max << endl;
    
    map<int, int> rank = 
    {
        {6, 1},
        {5, 2},
        {4, 3},
        {3, 4},
        {2, 5},
        {1, 6},
        {0, 6},
    };
    
    answer.push_back(rank[max]);
    answer.push_back(rank[min]);
    
    
    return answer;
}