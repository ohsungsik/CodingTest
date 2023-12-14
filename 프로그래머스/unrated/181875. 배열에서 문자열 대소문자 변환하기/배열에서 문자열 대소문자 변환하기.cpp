#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++)
    {
        if (i % 2 == 0)
        {
            std::for_each(strArr[i].begin(), strArr[i].end(), [](char & c) { c = ::tolower(c); });
        }
        else
        {
            std::for_each(strArr[i].begin(), strArr[i].end(), [](char & c) { c = ::toupper(c); });
        }
        answer.emplace_back(strArr[i]);
    }
    return answer;
}