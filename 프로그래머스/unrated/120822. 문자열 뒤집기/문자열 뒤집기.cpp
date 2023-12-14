#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    std::reverse(my_string.begin(), my_string.end());
    return my_string;
}