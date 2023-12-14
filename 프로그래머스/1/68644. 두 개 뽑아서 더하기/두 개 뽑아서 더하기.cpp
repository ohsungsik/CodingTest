#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    set<int> set;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            set.insert(numbers[i] + numbers[j]);
        }
    }
    
    for (int i : set)
    {
        answer.push_back(i);
    }
    
    return answer;
}