#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer = vector<vector<int>>(n, vector<int>(n, 0));
    
    vector<int> xDir = {1, 0, -1, 0};
    vector<int> yDir = {0, 1, 0, -1};
    
    queue<int> direction;
    direction.push(0);
    direction.push(1);
    direction.push(2);
    direction.push(3);
    
    int locationX = 0;
    int locationY = 0;
        
    int index = 0;
    while (true)
    {
        answer[locationY][locationX] = ++index;
        
        bool find = false;
        for (int i = 0; i < xDir.size(); i++)
        {
            const int newLocationY = locationY + yDir[direction.front()];
            const int newLocationX = locationX + xDir[direction.front()];

            if (newLocationY < n && newLocationY >= 0 &&
                newLocationX < n && newLocationX >= 0 &&
                answer[newLocationY][newLocationX] == 0
               )
            {
                find = true;
                break;
            }            
            
            int dir = direction.front();
            direction.pop();
            direction.push(dir);
        }
        
        if (find == false)
            break;      
        
        locationY += yDir[direction.front()];
        locationX += xDir[direction.front()];
    }
    
    return answer;
}