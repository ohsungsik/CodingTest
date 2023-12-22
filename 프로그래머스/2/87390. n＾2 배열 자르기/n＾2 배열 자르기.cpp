#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long i = left; i <= right; i++)
    {
        int p = i / n;
        int q = i % n;
        
        answer.push_back(max(p, q) + 1);
    }
    
    return answer;
}