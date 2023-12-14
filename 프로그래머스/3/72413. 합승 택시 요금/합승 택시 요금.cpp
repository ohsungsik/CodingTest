#include <vector>

int solution(int n, int s, int a, int b, std::vector<std::vector<int>> fares) {
    int answer = 100000 * 200;

    std::vector<std::vector<int>> graph;
    graph.reserve(n);

    for (int i = 0; i < n; i++)
    {
        std::vector<int> fare;
        fare.reserve(n);
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                fare.emplace_back(0);
            else
                fare.emplace_back(100000 * 200);
        }
        graph.emplace_back(fare);
    }

    for (const auto& fare : fares)
    {
        int src = fare[0];
        int dst = fare[1];
        int cost = fare[2];

        graph[src - 1][dst - 1] = cost;
        graph[dst - 1][src - 1] = cost;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                graph[j][k] = std::min(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int cost = graph[s - 1][i] + graph[i][a - 1] + graph[i][b - 1];
        answer = std::min(cost, answer);
    }

    return answer;
}