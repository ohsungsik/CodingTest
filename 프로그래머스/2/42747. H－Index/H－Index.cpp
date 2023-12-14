#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    sort(citations.begin(), citations.end(), greater<>());
    
    for (int i = 1; i <= citations.size(); i++)
    {
        if (citations[i - 1] < i)
        {
            answer = i - 1;
            break;
        }
        else
        {
            answer++;
        }
    }  
        
    return answer;
}