#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    map<char, char> m = {
        {'2', '0'},
        {'0', '5'},
        {'5', '2'}
    };
    
    for (char c : rsp)
    {
        answer += m[c];
    }
    
    
    return answer;
}