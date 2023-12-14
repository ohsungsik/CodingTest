#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (const auto& intStr : intStrs)
    {
        const string t = intStr.substr(s, l);
        const int lhs = stoi(t);
        if (lhs > k)
            answer.push_back(lhs);
    }
    
    return answer;
}