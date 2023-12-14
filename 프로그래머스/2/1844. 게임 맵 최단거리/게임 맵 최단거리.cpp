#include <queue>
#include <vector>

using namespace std;

int rowMove[] = { -1, 1, 0, 0 };
int colMove[] = { 0, 0, -1, 1 };

vector<vector<int>> Maps;
int TargetX;
int TargetY;
int MaxWidth;
int MaxHeight;

int GetShortestCount(queue<pair<pair<int, int>, int>>& q, vector<vector<bool>>& visit)
{
    int answer = -1;

    while (q.empty() == false)
    {
        const pair<pair<int, int>, int> item = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int y = item.first.second + colMove[i];
            int x = item.first.first + rowMove[i];

            if (x < 0 || MaxWidth <= x || y < 0 || MaxHeight <= y)
                continue;

            if (Maps[y][x] == 0)
                continue;

            if (visit[y][x] == true)
                continue;

            // 목적지 도착
            if (y == TargetY && x == TargetX)
            {
                answer = item.second + 1;
                break;
            }

            q.push({ {x, y}, item.second + 1 });
            visit[y][x] = true;
        }

        int result = GetShortestCount(q, visit);
        if (result == -1)
            continue;

        if (answer == -1)
        {
            answer = result;
        }
        else
        {
            answer = min(answer, result);
        }
    }

    return answer;
}

int solution(vector<vector<int>> maps)
{
    int answer = 0;

    Maps = std::move(maps);
    MaxHeight = Maps.size();
    MaxWidth = Maps[0].size();
    TargetY = MaxHeight - 1;
    TargetX = MaxWidth - 1;

    vector<vector<bool>> visit(MaxHeight, vector<bool>(MaxWidth, false));
    queue<pair<pair<int, int>, int>> q;
    q.push({ {0, 0}, 1 });
    answer = GetShortestCount(q, visit);

    return answer;
}