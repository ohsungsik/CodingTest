#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    
    if (my_string.size() < target.size())
    {
        answer = 0;
        return answer;
    }
    
    for (int i = 0; i <= my_string.size() - target.size(); i++)
    {
        string sub = my_string.substr(i, target.size());
        if (sub == target)
        {
            answer = 1;
            break;
        }
    }
    return answer;
}