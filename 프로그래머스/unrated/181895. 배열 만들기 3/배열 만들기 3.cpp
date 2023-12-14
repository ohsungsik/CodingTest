#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for (const auto& v : intervals)
    {
        const auto& interval = vector<int>(arr.begin() + v[0], arr.begin() + v[1] + 1);
        answer.insert(answer.end(), interval.cbegin(), interval.cend());    
    }
    
    return answer;
}