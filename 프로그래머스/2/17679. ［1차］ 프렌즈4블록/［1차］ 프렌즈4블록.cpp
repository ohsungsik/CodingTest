#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    
    const vector<int> moveX = { 0, 1, 0, 1 };
    const vector<int> moveY = { 0, 0, 1, 1 };
    
    while (true)
    {
        set<pair<int, int>, greater<pair<int, int>>> removeable;
        for (int y = 0; y < board.size() - 1; y++)
        {
            for (int x = 0; x < board[y].size() - 1; x++)
            {
                if (board[y][x] == '0')
                    continue;
                
                bool isSame = true;
                for (int i = 0; i < moveX.size(); i++)
                {
                    if (board[y][x] != board[y + moveY[i]][x + moveX[i]])
                    {
                        isSame = false;
                        break;
                    }
                }

                if (isSame == false)
                    continue;

                for (int i = 0; i < moveX.size(); i++)
                {
                    const auto p = make_pair(y + moveY[i], x + moveX[i]);
                    removeable.insert(p);
                }
            }
        }

        if (removeable.size() <= 0)
        {
            break;
        }

        answer += removeable.size();

        while (removeable.size() != 0)
        {
            pair<int, int> location = *removeable.begin();
            removeable.erase(removeable.begin());
            
            board[location.first][location.second] = '0';
        }
        
        for (int x = 0; x < board[0].size(); x++)
        {
            for (int y = board.size() - 1; y >= 0; y--)
            {
                if (board[y][x] != '0')
                    continue;
                
                int targetY = y - 1;
                while (targetY >= 0)
                {
                    if (board[targetY][x] != '0')
                    {
                        board[y][x] = board[targetY][x];
                        board[targetY][x] = '0';
                        break;
                    }
                    targetY--;
                }
            }
        }
        
        // for (const auto& block : board)
        // {
        //     cout << block << endl;
        // }
        // cout << endl;
    }
    
    
    return answer;
}