#include <cmath>
#include <string>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    for (const vector<int>& job : jobs)
    {
        pq.emplace(make_pair(job[0], make_pair(job[1], job[0])));
    }
    
    int average = 0;
    int currentTime = pq.top().first;
    
    while (pq.empty() == false)
    {
        while (true)
        {
            std::pair<int, pair<int, int>> pair = pq.top();
            if (pair.first >= currentTime)
            {
                break;
            }
            pair.first = currentTime;
            pq.pop();
            pq.emplace(pair);
        }
        
        std::pair<int, pair<int, int>> pair = pq.top();
        
        int sleepTime = currentTime - pair.second.second;
        // cout << "sleepTime " << sleepTime << endl;
        int endDuration = sleepTime + pair.second.first;
        // cout << "End duration " << endDuration << endl;
        average += endDuration;
        pq.pop();
        
        if (pq.empty() == false)
        {
            std::pair<int, std::pair<int, int>> next = pq.top();
            
            currentTime += pair.second.first;
            if (currentTime < next.first)
                currentTime = next.first;                
        }
    }
    
    answer = floor((double)average / jobs.size());
    return answer;
}