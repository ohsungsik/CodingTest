#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    map<string, vector<string>> map;

    for (const auto& cloth : clothes)
    {
        map[cloth[1]].push_back(cloth[0]);
    }

    for (const auto& item : map)
    {
        answer *= item.second.size() + 1;
    }

    return answer - 1;
}