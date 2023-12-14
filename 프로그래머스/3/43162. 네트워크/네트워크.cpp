#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<bool>> visit;

int GetCount(int node, const vector<vector<int>>& computers)
{
    int answer = 0;
    
    for (int i = 0; i < computers[node].size(); i++)
    {
        if (computers[node][i] == 1 && visit[node][i] == false)
        {
            visit[node][i] = true;
            answer++;
            GetCount(i, computers);
        }
    }
    
    return answer;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    visit = vector<vector<bool>>(computers.size(), vector<bool>(computers[0].size(), false));
    
    for (int i = 0; i < computers.size(); i++)
    {
        answer += GetCount(i, computers);
    }
    
    return answer;
}