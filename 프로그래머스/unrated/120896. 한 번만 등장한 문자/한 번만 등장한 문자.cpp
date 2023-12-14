#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    
    map<char, int> m;
    for (const char& c : s)
    {
        m[c]++;
    }
    
    for (const auto& pair : m)
    {
        if (pair.second == 1)
            answer += pair.first;
    }
    
    return answer;
}