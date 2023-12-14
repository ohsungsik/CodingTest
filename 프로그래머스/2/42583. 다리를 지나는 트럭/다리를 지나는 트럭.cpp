#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    int bridgeWeight = 0;
    queue<pair<int, int>> currentTruck;

    int step = 0;

    while (true)
    {
        step++;

        if (currentTruck.empty() == false)
        {
            const pair<int, int>& frontTruck = currentTruck.front();
            if (frontTruck.second + bridge_length <= step)
            {
                bridgeWeight -= frontTruck.first;
                currentTruck.pop();
            }
        }


        if (bridgeWeight < weight && truck_weights.empty() == false)
        {
            int truckWeight = truck_weights.front();
            if (bridgeWeight + truckWeight <= weight)
            {
                truck_weights.erase(truck_weights.begin());

                bridgeWeight += truckWeight;
                currentTruck.push({ truckWeight, step });
            }
        }



        if (truck_weights.empty() && currentTruck.empty())
            break;
    }

    answer = step;
    
    return answer;
}