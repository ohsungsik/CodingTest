#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    transform(myString.begin(), myString.end(), myString.begin(), [](unsigned char c){ return tolower(c); });
    answer = myString;
    return answer;
}