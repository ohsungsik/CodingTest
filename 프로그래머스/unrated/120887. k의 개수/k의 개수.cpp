#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int o = i; o <= j; o++)
    {
        int p = o;
        while (p != 0)
        {
            int v = p % 10;
            p /= 10;
            
            if (v == k){
                answer++;
            }
        }
    }
    
    return answer;
}