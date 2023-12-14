#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.rbegin(), sides.rend());
    
    for (int i = sides[0]; i > sides[0] - sides[1]; i--)
        answer++;
    
    for (int i = sides[0] + 1; i < sides[0] + sides[1]; i++)
        answer++;
    
    return answer;
}