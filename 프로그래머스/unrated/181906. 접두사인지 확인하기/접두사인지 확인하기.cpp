#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    answer = my_string.find(is_prefix) == 0 ? 1 : 0;
    return answer;
}