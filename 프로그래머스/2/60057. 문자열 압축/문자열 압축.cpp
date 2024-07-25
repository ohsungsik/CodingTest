#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = s.size();  
    
    for (int i = 1; i < s.size(); i++)
    {
        string compressed = "";
        string pattern = s.substr(0, i);
        int count = 1;
        
        for (int j = i; j < s.size(); j += i)
        {
            string comparsion = s.substr(j, i);
            
            if (pattern == comparsion)
            {
                count += 1;
            }
            else
            {
                compressed += (count > 1) ? to_string(count) + pattern : pattern;
                pattern = comparsion;
                count = 1;
            }
        }
        
        compressed += (count > 1) ? to_string(count) + pattern : pattern;
        answer = min(answer, static_cast<int>(compressed.size()));
    }
    
    return answer;
}