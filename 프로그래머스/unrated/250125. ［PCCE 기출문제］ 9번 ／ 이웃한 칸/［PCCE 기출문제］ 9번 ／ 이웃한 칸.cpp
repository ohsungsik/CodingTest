#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    vector<int> axisX = { -1, 0, 0, 1 };
    vector<int> axisY = {0, 1, -1, 0 };
    
    string target = board[h][w];
    
    for (int axis = 0; axis < axisX.size(); axis++)
    {
        if (h + axisY[axis] >= board.size() 
            || h + axisY[axis] < 0
            || w + axisX[axis] >= board[0].size()
            || w + axisX[axis] < 0)
            continue;
        
        if (target == board[h + axisY[axis]][w + axisX[axis]])
        {
            answer++;
        }
    }
    
    return answer;
}