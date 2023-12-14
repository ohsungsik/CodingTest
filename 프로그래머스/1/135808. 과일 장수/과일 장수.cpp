#include <bits/stdc++.h>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<int>());
    
    int i = 0;
    while (i < score.size())
    {
        int min = k + 1;
        
        for (int j = i; j < m + i; j++)
        {
            if (score[j] < min)
                min = score[j];
        }
        
        int value = min * m;
        answer += value;
        
        i += m;
    }
    
    return answer;
}