#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    double q = sqrt(n);
    answer = q - (int)q == 0 ? 1 : 2;
    
    return answer;
}