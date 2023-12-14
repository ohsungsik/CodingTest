#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    unordered_map<char, bool> m;
    
    for (const char& c : my_string)
    {
        if (m[c] != false)
            continue;
        
        answer += c;
        m[c] = true;
    }
    
    return answer;
}