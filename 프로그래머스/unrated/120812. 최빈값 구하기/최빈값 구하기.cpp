#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    int value = 0;
    
    map<int, int> map;
    for (const auto& idx : array)
    {
        map[idx]++;
    }
    
    for (const auto pair : map)
    {
        if (value < pair.second)
        {
            value = pair.second;
            answer = pair.first;
        }
    }
    
    int count = 0;
    for (const auto pair : map)
    {
        if (value == pair.second)
            count++;
    }
    
    if (count > 1)
        answer = -1;
    
    return answer;
}