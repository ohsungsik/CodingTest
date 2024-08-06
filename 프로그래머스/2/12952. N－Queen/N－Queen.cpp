#include <vector>

using namespace std;

// 백트래킹을 사용하여 퀸 배치 가능 여부 검사
void placeQueens(int row, int n, vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2, int& count) {
    if (row == n) {
        // 모든 퀸이 배치되었으면 정답 카운트 증가
        count++;
        return;
    }
    
    for (int col = 0; col < n; col++) {
        // 각 열과 대각선을 확인하여 퀸 배치 가능 여부 판단
        if (!cols[col] && !diag1[row + col] && !diag2[row - col + n - 1]) {
            // 퀸 배치
            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = true;
            // 다음 행의 퀸 배치 시도
            placeQueens(row + 1, n, cols, diag1, diag2, count);
            // 퀸 제거(백트래킹)
            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = false;
        }
    }
}

int solution(int n) {
    vector<bool> cols(n, false);
    vector<bool> diag1(2 * n - 1, false);
    vector<bool> diag2(2 * n - 1, false);
    int answer = 0;
    
    // 0번 행부터 시작하여 퀸 배치 시도
    placeQueens(0, n, cols, diag1, diag2, answer);
    
    return answer;
}
