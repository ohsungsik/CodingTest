#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    vector<string> formul;
    size_t idx = 0;
    while ((idx = my_string.find(" ")) != string::npos)
    {
        string sub = my_string.substr(0, idx);
        formul.emplace_back(sub);
        my_string.erase(0, idx + 1);
    }
    formul.emplace_back(my_string);
    
    answer = stoi(formul[0]);
    
    for (int i = 1; i < formul.size(); i += 2)
    {
        if (formul[i] == "+")
            answer = answer + stoi(formul[i + 1]);
        else
            answer = answer - stoi(formul[i + 1]);
    }
    
    
    return answer;
}