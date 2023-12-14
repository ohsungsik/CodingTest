#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        int p = (n / a) * b;
        int q = n % a;
        n = n - (n - q) + p;
        answer += p;
    }
    
    return answer;
}