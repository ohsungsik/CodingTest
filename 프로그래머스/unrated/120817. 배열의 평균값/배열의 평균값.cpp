#include <numeric>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    answer = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    return answer;
}