#include <string>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int lcm = std::lcm(denom1, denom2);
    // cout << lcm << endl;
    
    int mul = lcm / denom1;
    numer1 *= mul;
    denom1 *= mul;
        
    mul = lcm / denom2;
    numer2 *= mul;
    denom2 *= mul;
    
    int numer = numer1 + numer2;
    int denom = denom1;
    
    // cout << numer << "/" << denom << endl;
    
    int gcd = std::gcd(numer, denom);

    numer /= gcd;
    denom /= gcd;
    
    answer.emplace_back(numer);
    answer.emplace_back(denom);
    
    return answer;
}