#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = std::find(num_list.begin(), num_list.end(), n) != num_list.end() ? 1 : 0;
    return answer;
}