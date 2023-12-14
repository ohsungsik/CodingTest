#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<>> queue;
    for (int i : score)
    {
        queue.push(i);

        if (queue.size() > k)
        {
            queue.pop();
        }

        answer.push_back(queue.top());
    }
    
    return answer;
}