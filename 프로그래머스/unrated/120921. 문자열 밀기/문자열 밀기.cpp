#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    string aBackup = A;
    
    if (A == B)
        return answer;
    
    while (true)
    {
        rotate(A.rbegin(), A.rbegin() + 1, A.rend());
        
        if (A == aBackup)
        {
            answer = -1;
            break;
        }
        
        answer++;
        if (A == B)
            break;
    }
    return answer;
}