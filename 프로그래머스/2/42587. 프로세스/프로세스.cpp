#include <algorithm>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int, int>> q;
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({ priorities[i], i });
    }
    sort(priorities.begin(), priorities.end(), greater<int>());

    while (!q.empty())
    {
        const pair<int, int> priority = q.front();
        q.pop();

        if (priority.first >= priorities.front())
        {
            answer++;

            if (priority.second == location)
                break;

            priorities.erase(priorities.cbegin());
        }
        else
        {
            q.emplace(priority);
        }
    }
    
    return answer;
}