#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    std::sort(sides.begin(), sides.end());
    
    answer = sides[2] < sides[1] + sides[0] ? 1 : 2;
    return answer;
}