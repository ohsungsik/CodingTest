#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if (direction == "left")
    {
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    }
    else
    {
        rotate(numbers.rbegin(), numbers.rbegin() + 1, numbers.rend());
    }
    answer = numbers;
    return answer;
}