#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    
    queue<int> queue;
    for (int i = 0; i < numbers.size(); i++)
        queue.push(numbers[i]);
    
    for (int i = 0; i < k; i++)
    {
        int idx = queue.front();
        queue.pop();
        
        if (i == k - 1)
            answer = idx;
        
        int jumpIdx = queue.front();
        queue.pop();
        
        queue.push(idx);
        queue.push(jumpIdx);
    }
    
    return answer;
}