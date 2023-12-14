#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> vector;
    int idx = 0;
    for (int i = 0; i < dartResult.size(); i++)
    {
        int result = 0;
        char c = dartResult[i];
        if (c == 'S')
        {
            string s = dartResult.substr(idx, i - idx);
            // cout << s << endl;
            int v = stoi(s);

            result = pow(v, 1);

            vector.push_back(result);
        idx = i + 1;
        }
        else if (c == 'D')
        {
            string s = dartResult.substr(idx, i - idx);
            // cout << s << endl;
            int v = stoi(s);

            result = pow(v, 2);

            vector.push_back(result);
        idx = i + 1;
        }
        else if (c == 'T')
        {
            string s = dartResult.substr(idx, i - idx);
            // cout << s << endl;
            int v = stoi(s);

            result = pow(v, 3);

            vector.push_back(result);
        idx = i + 1;
        }
        else if (c == '#')
        {
            vector[vector.size() - 1] *= -1;
        idx = i + 1;
        }
        else if (c == '*')
        {
            int index = vector.size() - 1;
            bool isFirst = true;
            while (index >= 0)
            {
                vector[index] *= 2;
                index--;
                
                if (isFirst == false)
                    break;
                isFirst = false;
            }
        idx = i + 1;
        }
    }
    
    for (int v : vector)
    {
        // cout << v << endl;
        answer += v;
    }
    return answer;
}