#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    
    int n = name.length();
    int answer = 0;

    // 상하 조작 횟수 계산
    for (char c : name) {
        answer += min(c - 'A', 'Z' - c + 1);
    }

    // 좌우 이동 최소 횟수 계산
    int minMove = n - 1; // 기본적으로 오른쪽 끝까지 가는 경우
    for (int i = 0; i < n; i++) {
        int next = i + 1;
        while (next < n && name[next] == 'A') {
            next++;
        }
        int distance = i + n - next + min(i, n - next);
        minMove = min(minMove, distance);
    }

    answer += minMove;
    
    return answer;
}