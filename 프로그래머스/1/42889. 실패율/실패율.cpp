#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    map<int, vector<int>> map;
    
    sort(stages.begin(), stages.end());
    
    for (int i = 0; i < stages.size(); i++)
    {
        map[stages[i]].push_back(i);
    }
    
    std::map<double, vector<int>, greater<double>> failure;
    int passCount = 0;
    for (int i = 1; i < N + 1; i++)
    {
        const auto& passer = map[i];
        
        if (passer.size() == 0)
            failure[0].push_back(i);
        else
            failure[static_cast<double>(passer.size()) / static_cast<double>(stages.size() - passCount)].push_back(i);
        
        passCount += passer.size();
    }
    
    for (const auto& pair : failure)
    {
        vector<int> v = pair.second;
        sort(v.begin(), v.end());
        answer.insert(answer.end(), v.begin(), v.end());
    }
    
    return answer;
}