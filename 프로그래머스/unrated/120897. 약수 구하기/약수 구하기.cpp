#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 1 ; i <= sqrt(n); i++)
    {
        if (n % i != 0)
            continue;
        
        int lhs = i;
        int rhs = n / i;
        
        const int idx = answer.size() / 2;
        answer.insert(answer.begin() + idx, lhs);
        
        if (lhs != rhs)
            answer.insert(answer.end() - idx, rhs);
    }
    
    return answer;
}