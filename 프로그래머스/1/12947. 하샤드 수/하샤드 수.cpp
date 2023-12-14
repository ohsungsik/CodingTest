#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int xBackup = x;
    long long sum = 0;
    
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    
    answer = xBackup % sum == 0 ? true : false;
    
    return answer;
}