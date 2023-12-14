#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    while (my_str.size() > 0)
    {
        string sub = my_str.substr(0, n);
        answer.push_back(sub);
        my_str.erase(0, n);
    }
    
    return answer;
}