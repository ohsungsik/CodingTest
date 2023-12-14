#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool Compare(int lhs, int rhs)
{
    string lhsString = to_string(lhs);
    string rhsString = to_string(rhs);
    
    int fLhs = -1;
    int fRhs = -1;
    
    bool lhsB = false;
    bool rhsB = false;
    
    while (true)
    {
        if (lhsB && rhsB)
            break;
        
        if (lhsString.size() != 0)
        {
            fLhs++;
            if (fLhs >= lhsString.size())
            {
                fLhs = 0;
                lhsB = true;
            }
        }
            
        if (rhsString.size() != 0)
        {
            fRhs++;
            if (fRhs >= rhsString.size())
            {
                fRhs = 0;
                rhsB = true;
            }
        }
        
        if (lhsString[fLhs] != rhsString[fRhs])
            return lhsString[fLhs] - '0' > rhsString[fRhs] - '0';
    }
    
    return lhs > rhs;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(), numbers.end(), Compare);
    
    bool result = false;
    for (int value : numbers)
    {
        if (value != 0) 
            result = true;
        answer += to_string(value);
    }
    
    if (numbers.size() != 0 && result == false)
        answer = "0";
        
    return answer;
}