#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int GetNodeCount(int target, vector<int> disconnect, vector<vector<int>> wires)
{
    queue<int> q;
    int answer = 0;

    if (wires.empty())
        return 0;

    for (vector<int> wire : wires)
    {
        if (wire[0] == target || wire[1] == target)
        {
            if ((wire[0] == disconnect[0] && wire[1] == disconnect[1]) ||
                (wire[0] == disconnect[1] && wire[1] == disconnect[0]))
            {
                continue;
            }

            int node = wire[0] == target ? wire[1] : wire[0];
            q.push(node);
        }
    }

    answer += q.size();

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        
        vector<int> eraseTarget = { target, node };
        auto iterator = find(wires.begin(), wires.end(), eraseTarget);
        if (iterator == wires.end())
        {
            eraseTarget = { node, target };
            iterator = find(wires.begin(), wires.end(), eraseTarget);
        }

        wires.erase(iterator);

        answer += GetNodeCount(node, disconnect, wires);
    }

    return answer;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 2147483647;

    for (int i = 1; i <= n; i++)
    {
        int lhs = 0;
        int rhs = 0;
        for (vector<int> wire : wires)
        {
            lhs = GetNodeCount(i, wire, wires) + 1;
            rhs = n - lhs;

            answer = min(answer, abs(lhs - rhs));
        }
    }

    return answer;
}