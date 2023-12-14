#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    my_string.erase(std::remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    answer = my_string;
    return answer;
}