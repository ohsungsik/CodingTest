#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    vector<int> v = vector<int>(7, 0);
    v[a]++;
    v[b]++;
    v[c]++;
    v[d]++;
    
    vector<int> s = v;
    sort(s.begin(), s.end(), greater<int>());
    
    if (s[0] == 4)
    {
        int p = distance(v.begin(), find(v.begin(), v.end(), 4));
        answer = p * 1111;
    }
    else if (s[0] == 3)
    {
        int p = distance(v.begin(), find(v.begin(), v.end(), 3));
        int q = distance(v.begin(), find(v.begin(), v.end(), 1));
        
        answer = pow(10 * p + q, 2);
    }
    else if (s[0] == 2)
    {
        if (s[1] == 2)
        {
            auto it = find(v.begin(), v.end(), 2);
            int p = distance(v.begin(), it);
            
            it = find(++it, v.end(), 2);
            int q = distance(v.begin(), it);

            answer = (p + q) * abs(p - q);    
            
            cout << p << " " << q << endl;
        }
        else
        {
            auto it = find(v.begin(), v.end(), 1);
            int q = distance(v.begin(), it);
            
            it = find(++it, v.end(), 1);
            int r = distance(v.begin(), it);

            answer = q * r;
        }
    }
    else
    {
        int min = 10;
        int idx = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != 0 && v[i] < min)
            {
                min = v[i];
                idx = i;
            }
        }
        
        answer = idx;
    }
    
    return answer;
}