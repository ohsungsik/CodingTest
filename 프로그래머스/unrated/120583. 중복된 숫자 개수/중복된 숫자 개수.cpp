#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    for (const auto& number : array)
    {
        if (number == n)
        {
            answer++;
        }
    }
    return answer;
}