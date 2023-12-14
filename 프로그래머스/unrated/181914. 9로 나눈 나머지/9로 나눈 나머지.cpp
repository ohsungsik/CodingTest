#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    for (const char& c : number)
        answer += c - '0';
    
    // cout << answer << endl;
    answer %= 9;
    
    return answer;
}