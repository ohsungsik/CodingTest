#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for (const char& c : my_string)
    {
        if (isdigit(c))
            answer.emplace_back(c - '0');
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}