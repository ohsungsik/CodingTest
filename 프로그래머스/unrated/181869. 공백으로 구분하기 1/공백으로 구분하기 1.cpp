#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    size_t pos = 0;
    while ((pos = my_string.find(" ")) != string::npos)
    {
        answer.push_back(my_string.substr(0, pos));
        my_string.erase(0, pos + 1);
    }
    answer.push_back(my_string);
    
    return answer;
}