#include <cctype>
#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    int balance = 0;
    
    for (const auto& c : s)
    {
        if (tolower(c) == 'p')
            balance++;
        else if (tolower(c) == 'y')
            balance--;
    }
    
    answer = balance == 0 ? true : false;

    return answer;
}