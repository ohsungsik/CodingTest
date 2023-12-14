#include <bits/stdc++.h>

using namespace std;

bool isNotPrime[1000000 + 1];

bool IsPrime(const int& n, const int& max) 
{
    if (isNotPrime[n] == true)
        return false;
    
    for (int j = n * 2; j <= max; j += n)
    {
        isNotPrime[j] = true;
    }
	return true;
}

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i <= n; i++)
    {
        if (IsPrime(i, n))
            answer++;
    }
    
    return answer;
}