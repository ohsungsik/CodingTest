#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = ceil(static_cast<float>(n) / 7);
    return answer;
}