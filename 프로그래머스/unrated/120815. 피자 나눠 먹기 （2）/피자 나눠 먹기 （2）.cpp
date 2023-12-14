#include <cmath>
#include <string>
#include <vector>

using namespace std;

int gcd(int x, int y){
    if(y == 0){
        return x;
    } else {
        return gcd(y, x%y);
    }
}

int solution(int n) {
    int answer = abs(n) / gcd(6, n);
    
    return answer;
}