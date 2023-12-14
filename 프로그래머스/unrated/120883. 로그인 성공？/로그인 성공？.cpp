#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    
    map<string, string> map;
    for (const auto& v : db)
    {
        map[v[0]] = v[1];
    }
    
    string pw = map[id_pw[0]];
    if (pw == "")
        answer = "fail";
    else if (pw == id_pw[1])
        answer = "login";
    else
        answer = "wrong pw";
    
    return answer;
}