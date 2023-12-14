#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    long long pos = 0;
    while((pos = myString.find("x")) != string::npos)
    {
        string token = myString.substr(0, pos);
        
        answer.push_back(token.size());
        
        myString.erase(0, pos + 1);
    }
    answer.push_back(myString.size());
    
    return answer;
}