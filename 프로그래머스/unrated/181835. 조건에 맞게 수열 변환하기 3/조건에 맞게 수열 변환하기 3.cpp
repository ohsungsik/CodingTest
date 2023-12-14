#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    if (k % 2 == 0)
    {
        for (const int& num : arr)
        {
            answer.push_back(num + k);
        }
    }
    else
    {
        for (const int& num : arr)
        {
            answer.push_back(num * k);
        }
    }
    return answer;
}