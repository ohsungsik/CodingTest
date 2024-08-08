#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const vector<vector<pair<int, int>>> nextDir { 
    { {-1, 1}, {0, -1}, {-1, 0}, {1, 0}, {0, 1}, {1, 1} },  // even
    { {-1, -1}, {0, -1}, {-1, 0}, {1, 0}, {0, 1}, {1, -1} } // odd
};

bool IsOutOfBounds(const pair<int, int>& input, int height, int width) {
    return 0 > input.first || input.first >= height || 0 > input.second || input.second >= width;
}

int Solution(const pair<int, int>& start, vector<vector<int>>& matrix, vector<vector<bool>>& visited, int height, int width) {
    bool isOut = false;
    int wallCount = 0;

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        for (const pair<int, int>& d : nextDir[cur.first % 2]) {
            pair<int, int> next = {cur.first + d.first, cur.second + d.second};
            if (IsOutOfBounds(next, height, width)) {
                isOut = true;
            } else if (matrix[next.first][next.second] == 1) {
                wallCount++;
            } else if (!visited[next.first][next.second]) {
                visited[next.first][next.second] = true;
                q.push(next);
            }
        }
    }

    if (isOut) return wallCount;
    else return 0;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int width, height;
    cin >> width >> height;
    int wallCount = 0;
    vector<vector<int>> matrix(height, vector<int>(width, 0));
    vector<vector<bool>> visited(height, vector<bool>(width, false));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (matrix[i][j] == 1) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) { // 가장자리인 경우 OOB 체크해서 wallCount++
                    for (const pair<int, int>& d : nextDir[i % 2]) {
                        pair<int, int> next = {i + d.first, j + d.second};
                        if (IsOutOfBounds(next, height, width)) wallCount++;
                    }
                }
            } else {
                if (!visited[i][j]) wallCount += Solution({i, j}, matrix, visited, height, width);
            }
        }
    }
    cout << wallCount << endl;
    
    return 0;
}
