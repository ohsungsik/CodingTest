#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    std::transform(myString.begin(), myString.end(), myString.begin(), [](unsigned char c){ return std::toupper(c); });
    answer = myString;
    return answer;
}