#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        for (int k = 0; k < n; k++)
        {
            answer += my_string[i];
        }
    }
    return answer;
}