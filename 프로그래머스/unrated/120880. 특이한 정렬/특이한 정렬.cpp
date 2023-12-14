#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;

bool Sort(int lhs, int rhs) {
    int a = abs(N - lhs);
    int b = abs(N - rhs);
    
    if (a == b)
        return lhs > rhs;
    
    return a < b;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    N = n;
    
    sort(numlist.begin(), numlist.end(), Sort);
    
    answer = numlist;
    
    return answer;
}