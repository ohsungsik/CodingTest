#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    map<string, int> map = {
        {"zero", 0 }, 
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
    };
    
    while (numbers.size() > 0)
    {
        for (const auto& pair : map)
        {
            if (numbers.find(pair.first) != 0)
                continue;
            
            numbers.erase(0, pair.first.size());
            
            answer *= 10;
            answer += pair.second;
        }
    }
    
    return answer;
}