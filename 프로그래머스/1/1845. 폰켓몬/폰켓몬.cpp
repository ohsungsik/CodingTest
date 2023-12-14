#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    unordered_set<int> number;
    
    for (const auto& num : nums)
    {
        number.insert(num);
    }
    
    if (nums.size() / 2 <= number.size())
        answer = nums.size() / 2;
    else
        answer = number.size();
    
    return answer;
}