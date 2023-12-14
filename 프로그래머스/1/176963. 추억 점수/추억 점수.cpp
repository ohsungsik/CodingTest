#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;

    unordered_map<string, int> memoryScoreMap;
    for (int i = 0; i < name.size(); i++)
    {
        memoryScoreMap.insert({ name[i], yearning[i] });
    }

    for (const auto& target : photo)
    {
        int score = 0;
        for (const auto& person : target)
        {
            if (memoryScoreMap.find(person) != memoryScoreMap.end())
            {
                score += memoryScoreMap[person];
            }
        }

        answer.push_back(score);
    }
    
    return answer;
}