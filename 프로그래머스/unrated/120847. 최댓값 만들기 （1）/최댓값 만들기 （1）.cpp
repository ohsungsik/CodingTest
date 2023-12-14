#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    std::sort(numbers.begin(), numbers.end());
    answer = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    return answer;
}