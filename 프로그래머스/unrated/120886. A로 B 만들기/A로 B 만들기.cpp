#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    
    for (int i = 0; i < before.size(); i++)
    {
        const char& c = before[i];
        
        // cout << c << " " << after <<endl;
        
        const auto it = after.find(c);
        if (it == string::npos)
        {
            break;
        }
        
        after.erase(it, 1);
    }
    
    if (after.size() == 0)
        answer = 1;
    
    return answer;
}