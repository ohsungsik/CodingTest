#include <string>
#include <stdio.h>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (const string& lhs : s1)
    {
        for (const string& rhs : s2)
        {
            if(lhs == rhs)
            {
                answer++;
            }
        }
    }
    return answer;
}