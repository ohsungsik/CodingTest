#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    
    int carry = 0;
    while (a.size() > 0 || b.size() > 0)
    {
        int lhs = 0;
        if (a.size() > 0)
        {
            lhs = *(--a.end()) - '0';
            a.erase(--a.end());
        }
        
        int rhs = 0;
        if (b.size() > 0)
        {
            rhs = *(--b.end()) - '0';
            b.erase(--b.end());
        }
        
        int result = lhs + rhs + carry;
        
        carry = result / 10;
        result = result % 10;
        
        answer.insert(0, to_string(result));
    }
    
    if (carry != 0)
    {
        answer.insert(0, to_string(carry));
    }
    
    return answer;
}