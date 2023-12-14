#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    map<string, int> map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
    };
    
    for (const auto& p : map)
    {
        while (s.find(p.first) != string::npos)
        {
            const size_t idx = s.find(p.first);
            s.erase(idx, p.first.size());
            s.insert(idx, to_string(p.second));
        }
    }
    
    answer = stoi(s);
    
    return answer;
}