#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> vector;
    while (n > 0)
    {
        vector.emplace_back(n % 10);
        n /= 10;
    }
    
    sort(vector.begin(), vector.end(), greater<int>());
    
    for (const int& v : vector)
    {
        answer *= 10;
        answer += v;
    }
    
    return answer;
}