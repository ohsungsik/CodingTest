#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    
    map<string, vector<string>> m;
    
    for (const string& s : report)
    {
        int pos = s.find(' ');
        string id = s.substr(0, pos);
        string repo = s.substr(pos, s.size() - pos);
        
        // cout << id << " " << repo << endl;
        
        m[repo].push_back(id);
    }
    
    map<string, int> m_a;
    for (const auto& p : m)
    {
        if (p.second.size() >= k)
        {
            for (const auto& s : p.second)
            {
                m_a[s]++;
            }
        }
    }
    
    for (const auto& s : id_list)
    {
        answer.push_back(m_a[s]);
    }
    
    return answer;
}