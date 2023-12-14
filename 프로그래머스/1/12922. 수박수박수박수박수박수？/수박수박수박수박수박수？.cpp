#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while (n-- > 0)
    {
        if (answer.size() % 2 == 0)
        {
            answer += "수";
        }
        else
        {
            answer += "박";
        }
    }
    
    return answer;
}