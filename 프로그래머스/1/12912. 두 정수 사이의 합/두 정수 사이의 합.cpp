#include <bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int min = std::min(a, b);
    int max = std::max(a, b);
    
    for (int i = min; i <= max; i++)
    {
        answer += i;
    }
    
    return answer;
}