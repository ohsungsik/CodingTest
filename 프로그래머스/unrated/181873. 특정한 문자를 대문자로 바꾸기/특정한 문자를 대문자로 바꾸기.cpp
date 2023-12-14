#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    std::transform(my_string.begin(), my_string.end(), my_string.begin(), [alp](unsigned char c){ 
        if (c == alp[0])
            return std::toupper(c);
        else
            return std::tolower(c);
    });
    answer = my_string;
    return answer;
}