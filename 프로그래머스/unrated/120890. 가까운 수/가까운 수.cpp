#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {

    vector<pair<int, int>> answer;   
    
    for (const int& number : array)
    {
        answer.push_back({abs(n - number), number});
    }
    
    sort (answer.begin(), answer.end());
    
    return answer[0].second;
}