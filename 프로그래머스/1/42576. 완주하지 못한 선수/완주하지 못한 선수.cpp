#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> completionMap;
    
    for (const auto& person : participant)
    {
        if (auto search = completionMap.find(person); search != completionMap.end())
        {
            search->second++;
        }
        else
        {
            completionMap.insert({person, 1});
        }
    }
    
    for (const auto& person : completion)
    {
        completionMap[person]--;
    }
    
    for (const auto& [key, value] : completionMap)
    {
        if (value != 0)
        {
            answer = key;
            break;
        }
    }
    
    return answer;
}