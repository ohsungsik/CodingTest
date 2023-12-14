#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
        
    for (int i = 0; i < skill_trees.size(); i++)
    {
        map<char, size_t> m;
        for (int j = 0; j < skill.size(); j++)
        {
            const auto& idx = skill_trees[i].find(skill[j]);
            
            m[skill[j]] = idx;
            
            // cout << skill[j] << " " << idx << endl;
        }
        
        bool possible = true;
        int index = m[skill[0]];
        for (int j = 1; j < skill.size(); j++)
        {
            if (index > m[skill[j]])
            {
                possible = false;
                break;
            }
            
            index = m[skill[j]];
        }
        
        if (possible == true)
        {
            answer++;
            // cout << skill_trees[i] << endl;
        }
    }
    
    return answer;
}