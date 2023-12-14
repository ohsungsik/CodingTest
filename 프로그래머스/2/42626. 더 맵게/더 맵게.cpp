#include <queue>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<>> q;
    for (const int& value : scoville)
    {
        q.push(value);
    }
    
    while (q.top() < K)
    {
        if (q.size() < 2)
        {
            answer = -1;
            break;
        }
        
        int lhs = q.top();
        q.pop();
        
        int rhs = q.top();
        q.pop();
        
        int newScoville = lhs + (rhs * 2);
        q.push(newScoville);
        
        answer++;
    }
    
    return answer;
}