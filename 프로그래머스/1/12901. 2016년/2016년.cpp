#include <bits/stdc++.h>

using namespace std;

string solution(int a, int b) {
    string answer = "";

    int q = 0;
    int m = 0;
    int k = 0;
    int j = 0;    
    if (a != 1 && a != 2)
    {
        q = b;
        m = a;
        k = 16;
        j = 20;    
    }
    else 
    {
        if (a == 1)
        {
            q = b;
            m = 13;
            k = 15;
            j = 20;
        }
        else
        {
            q = b;
            m = 14;
            k = 15;
            j = 20;
        }
    }
    
    int ret = (((q + (((m + 1) * 13) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7) + 7) % 7;
    
    vector<string> day = {
        "SAT","SUN","MON","TUE","WED","THU","FRI"
    };
    
    answer = day[ret];
    
    return answer;
}