#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    map<int, bool> map;
    for (int i = 0; i < rank.size(); i++)
    {
        map[rank[i]] = attendance[i];
    }
    
    int i = 10000;
    for (const auto& pair : map)
    {        
        if (pair.second == false)
            continue;
        
        answer += i * distance(rank.begin(), find(rank.begin(), rank.end(), pair.first));
        
        i /= 100;
        if (i == 0)
            break;
    }
    
    return answer;
}