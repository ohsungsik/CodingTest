#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    
    size_t idx = -1;
    do
    {
        idx = s.find(' ');
        string subStr = s.substr(0, idx);
        s.erase(0, idx + 1);
        cout << subStr << endl;
        for (int i = 0; i < subStr.size(); i++)
        {
            answer += i % 2 == 0 ? toupper(subStr[i]): tolower(subStr[i]);
        }
        answer += " ";
        
    } while (idx != string::npos);
    answer.erase(--answer.end());
    
    return answer;
}