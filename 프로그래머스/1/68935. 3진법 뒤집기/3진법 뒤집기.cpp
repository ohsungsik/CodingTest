#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> q;
    while (n > 0)
    {
        q.push_back(n % 3);
        n /= 3;
    }
    
    for (int i = 0; i < q.size(); i++)
    {
        answer += q[i] * pow(3, q.size() - 1 - i);
    }
    
    return answer;
}