#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    queue<int> q;
    q.push(arr.front());

    for (const auto& n : arr)
    {
        if (n != q.back())
            q.push(n);
    }

    while (!q.empty())
    {
        answer.emplace_back(q.front());
        q.pop();
    }

    return answer;
}