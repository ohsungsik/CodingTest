#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    queue<int> q;    
    for (const auto& price : prices)
    {
        q.emplace(price);
    }
    
    int flatLength = 0;
    int offset = 1;
    int index = offset;
    while (q.size() - 1 > 0)
    {
        int price = q.front();
        flatLength++;
        
        if (price <= prices[index])
        {
            if (index == prices.size() - 1)
            {
                answer.push_back(flatLength);
                q.pop();
                offset++;
                index = offset;
                flatLength = 0;
            }
            else
            {
                index++;
            }
        }
        else
        {
            answer.push_back(flatLength);
            q.pop();
            offset++;
            index = offset;
            flatLength = 0;
        }
    }
    
    answer.push_back(0);
    return answer;
}