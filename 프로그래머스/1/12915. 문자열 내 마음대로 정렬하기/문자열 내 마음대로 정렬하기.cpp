#include <bits/stdc++.h>

using namespace std;

int N;

bool Sort(string lhs, string rhs)
{
    if (lhs[N] == rhs[N])
        return lhs < rhs;
    return lhs[N] < rhs[N];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    N = n;
    
    sort (strings.begin(), strings.end(), Sort);
    
    answer = strings;
    
    return answer;
}