#include<string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    queue<bool> q;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            q.push(true);
        }
        else
        {
            if (q.empty())
            {
                answer = false;
                return answer;
            }
            q.pop();
        }
    }
    
    answer = q.empty() ? true : false;

    return answer;
}