#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    multiset<int> ms;
    
    for (const string& operate : operations)
    {
        char c = operate[0];
        int number = stoi(operate.substr(2, operate.size() - 2));
        
        if (c == 'I')
        {
            ms.insert(number);
        }
        else
        {
            if (number == 1)
            {
                if (ms.size() == 0)
                    continue;
                    
                ms.erase(--ms.end());
            }
            else
            {
                if (ms.size() == 0)
                    continue;
                
                ms.erase(ms.begin());
            }
        }
    }
    
    
    
    if (ms.size() == 0)
        answer = {0, 0};
    else
        answer = {*(--ms.end()), *ms.begin()};

    return answer;
}