#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for (int i = 0; i <= str2.size() - str1.size(); i++)
    {
        string sub = str2.substr(i, str1.size());
        if (str1 == sub)
        {
            answer = 1;
            break;
        }
    }
    return answer;
}