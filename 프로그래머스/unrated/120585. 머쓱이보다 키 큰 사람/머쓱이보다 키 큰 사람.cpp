#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (const int& rhs : array)
    {
        if (rhs > height)
        {
            answer++;
        }
    }
    return answer;
}