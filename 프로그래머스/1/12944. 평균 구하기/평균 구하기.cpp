#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for (const auto& value : arr)
        answer += value;
    
    answer /= arr.size();
    return answer;
}