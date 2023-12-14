#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    if (myString.size() < pat.size())
        return answer;
    
    std::for_each(myString.begin(), myString.end(), [](auto& c){c = tolower(c);});
    std::for_each(pat.begin(), pat.end(), [](auto& c){c = tolower(c);});
    
    for (int i = 0; i <= myString.size() - pat.size(); i++)
    {
        string sub = myString.substr(i, pat.size());
        if (pat == sub)
        {
            answer = 1;
            break;
        }
    }

    return answer;
}