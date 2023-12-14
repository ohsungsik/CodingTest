#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int& number : arr)
    {
        if (number >= 50 && number % 2 == 0)
        {
            number /= 2;
        }
        else if (number < 50 && number % 2 == 1)
        {
            number *= 2;
        }
        answer.push_back(number);
    }
    
    return answer;
}