#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    
    while (true)
    {
        if (n_str[0] == '0')
            n_str.erase(0, 1);
        else
            break;
    }
    
    answer = n_str;
    
    return answer;
}