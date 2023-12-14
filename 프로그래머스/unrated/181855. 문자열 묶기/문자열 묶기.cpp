#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    map<int, int> map;
    for (const auto& str : strArr)
    {
        map[str.size()]++;
    }
    
    for (const auto& pair : map)
    {
        if (answer < pair.second)
            answer = pair.second;
    }
    
    return answer;
}