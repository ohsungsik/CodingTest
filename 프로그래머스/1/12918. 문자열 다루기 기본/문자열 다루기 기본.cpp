#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    
    if (s.size() == 4 || s.size() == 6)
    {
        bool isOnlyDigit = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]) == false)
            {
                isOnlyDigit = false;
            }
        }
        
        if (isOnlyDigit == false)
            answer = false;
        else
            answer = true;
    }
    
    return answer;
}