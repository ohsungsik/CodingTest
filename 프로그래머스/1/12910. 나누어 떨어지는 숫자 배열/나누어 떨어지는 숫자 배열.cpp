#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (const int& value : arr)
    {
        if (value % divisor == 0)
            answer.push_back(value);
    }
    
    sort(answer.begin(), answer.end());    
    
    if (answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}