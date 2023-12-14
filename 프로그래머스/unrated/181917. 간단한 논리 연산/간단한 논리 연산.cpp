#include <string>
#include <vector>

using namespace std;

bool compare(bool lhs, bool rhs, bool isupper)
{
    if (lhs == rhs)
        return lhs;
    
    if (isupper)
        return true;
    
    return false;
}

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = compare(compare(x1, x2, true), compare(x3, x4, true), false);
    
    return answer;
}