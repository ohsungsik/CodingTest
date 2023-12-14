#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = ceil(static_cast<float>(n) / slice);
    return answer;
}