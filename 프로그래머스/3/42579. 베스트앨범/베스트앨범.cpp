#include <set>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string, int, greater<>> playCount;
    for (int i = 0; i < genres.size(); i++)
    {
        playCount[genres[i]] += plays[i];
    }

    map<int, map<int, set<int>, greater<>>, greater<>> map;
    for (int i = 0; i < genres.size(); i++)
    {
        map[playCount[genres[i]]][plays[i]].insert(i);
    }

    for (const auto& i : map)
    {
        int j = 0;
        for (const auto& k : i.second)
        {

            for (const auto& l : k.second)
            {
                answer.push_back(l);

                j++;
                if (j >= 2)
                {
                    break;
                }
            }

            if (j >= 2)
            {
                break;
            }
        }
    }
    
    return answer;
}