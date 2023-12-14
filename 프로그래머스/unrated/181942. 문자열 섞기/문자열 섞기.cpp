#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    
    for (size_t i = 0; i < str1.length(); i++)
    {
        answer += str1[i];
        answer += str2[i];
    }
    
    return answer;
}