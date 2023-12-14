#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    int moveY[] = {-1, 0, 1};
    int moveX[] = {-1, 0, 1};
    
    vector<vector<int>> map = vector<vector<int>>(board.size(), vector<int>(board.size(), 0));
    
    for (int y = 0; y < board.size(); y++)
    {
        for (int x = 0; x < board.size(); x++)
        {
            if (board[y][x] == 1)
            {
                map[y][x] = 1;
                
                for (int idxY = 0; idxY < sizeof(moveY); idxY++)
                {
                    for (int idxX = 0; idxX < sizeof(moveX); idxX++)
                    {
                        int locationY = y + moveY[idxY];
                        int locationX = x + moveX[idxX];
                        
                        if (locationY < 0 || locationY >= board.size() || locationX < 0 || locationX >= board.size())
                        {
                            continue;
                        }
                        
                        map[locationY][locationX] = 1;
                    }
                }
            }
        }
    }
    
    for (int y = 0; y < map.size(); y++)
    {
        for (int x = 0; x < map.size(); x++)
        {
            if (map[y][x] != 1)
                answer++;
        }
    }
    
    return answer;
}