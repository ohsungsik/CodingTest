#include <bits/stdc++.h>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; i++)
    {
        int count = 0;
        
        
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
                
                if (j != i / j)
                    count++;
            }
        }
        
        if (count % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    
    return answer;
}