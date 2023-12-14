#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.push_back(x);
    
    while (n-- > 1)
    {
        answer.push_back(*(--answer.end()) + x);
    }
    
    return answer;
}