#include <bits/stdc++.h>

using namespace std;

int SuitSaver(int suit, vector<int> lost, vector<int> reserve)
{
    if (lost.empty() == true)
    {
        return suit;
    }

    auto at_forward = find(reserve.begin(), reserve.end(), lost.front() - 1);
    auto at_backward = find(reserve.begin(), reserve.end(), lost.front() + 1);

    if (at_forward == reserve.end() && at_backward == reserve.end())
    {
        if (lost.empty() == false)
        {
            lost.erase(lost.begin(), lost.begin() + 1);
            return SuitSaver(suit, lost, reserve);
        }
        return suit;
    }

    int answer1 = 0;
    int answer2 = 0;
    if (at_forward != reserve.end())
    {
        vector<int> temp_lost = lost;
        temp_lost.erase(temp_lost.begin(), temp_lost.begin() + 1);

        vector<int> temp_reserve = reserve;
        int index = distance(reserve.begin(), at_forward);
        temp_reserve.erase(temp_reserve.begin() + index, temp_reserve.begin() + index + 1);

        answer1 = SuitSaver(suit + 1, temp_lost, temp_reserve);
    }

    if (at_backward != reserve.end())
    {
        vector<int> temp_lost = lost;
        temp_lost.erase(temp_lost.begin(), temp_lost.begin() + 1);

        vector<int> temp_reserve = reserve;
        int index = distance(reserve.begin(), at_backward);
        temp_reserve.erase(temp_reserve.begin() + index, temp_reserve.begin() + index + 1);

        answer2 = SuitSaver(suit + 1, temp_lost, temp_reserve);
    }

    return max(answer1, answer2);
}

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    int index = 0;
    while (true)
    {
        if (index >= lost.size())
        {
            break;
        }

        int target = lost[index];
        auto at = find(reserve.begin(), reserve.end(), target);

        if (at != reserve.end())
        {
            reserve.erase(at, at + 1);
            lost.erase(lost.begin() + index, lost.begin() + index + 1);

            continue;
        }

        if (reserve.empty() == true || lost.empty() == true)
        {
            break;
        }

        index++;
    }

    if (lost.empty() == false && reserve.empty() == false)
    {
        answer = SuitSaver(n - lost.size(), lost, reserve);
    }
    else
    {
        answer = n - lost.size();
    }
    
    return answer;
}