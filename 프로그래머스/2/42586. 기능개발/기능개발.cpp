#include <cmath>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int> completion;

    for (int i = 0; i < progresses.size(); i++)
    {
        int leftDays = static_cast<int>(ceil((100 - progresses[i]) / static_cast<float>(speeds[i])));
        if (completion.empty())
        {
            completion.push(leftDays);
            continue;
        }

        if (completion.back() >= leftDays)
            leftDays = completion.back();

        completion.push(leftDays);
    }

    int count = 1;
    int prevDays = completion.front();
    completion.pop();

    while (!completion.empty())
    {
        const int leftDays = completion.front();
        completion.pop();

        if (leftDays == prevDays)
        {
            count++;
            continue;
        }

        answer.push_back(count);
        count = 1;
        prevDays = leftDays;
    }
    answer.push_back(count);
    
    return answer;
}