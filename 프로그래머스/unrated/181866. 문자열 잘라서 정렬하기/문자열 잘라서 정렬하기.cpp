#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
     vector<string> splitted;
    
    long long pos = 0;
    while((pos = myString.find("x")) != string::npos)
    {
        string token = myString.substr(0, pos);
        
        if (token.size() > 0)
            splitted.emplace_back(token);
        
        myString.erase(0, pos + 1);
    }
    
    if (myString.size() > 0)
        splitted.emplace_back(myString);
    
    sort(splitted.begin(), splitted.end());
    
    answer = splitted;
    return answer;
}