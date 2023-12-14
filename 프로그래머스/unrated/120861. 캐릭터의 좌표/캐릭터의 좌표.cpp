#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    
    map<string, pair<int, int>> map = 
    {
        {"left", {-1, 0}},
        {"up", {0, 1}},
        {"right", {1, 0}},
        {"down", {0, -1}},
    };
    
    pair<int, int> location = {0, 0};
    for (const auto& input : keyinput)
    {
        const int newLocationX = location.first + map[input].first;
        const int newLocationY = location.second + map[input].second;
        if (newLocationX < board[0] / 2 * -1 || newLocationX > board[0] / 2 ||
            newLocationY < board[1] / 2 * -1 || newLocationY > board[1] / 2)
            continue;
        
        location.first = newLocationX;
        location.second = newLocationY;
    }
    
    answer.push_back(location.first);
    answer.push_back(location.second);
    
    return answer;
}