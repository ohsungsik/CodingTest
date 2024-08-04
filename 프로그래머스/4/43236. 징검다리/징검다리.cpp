#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    // 바위 위치를 정렬
    sort(rocks.begin(), rocks.end());
    
    // 이분 탐색 초기 범위 설정
    int low = 1;
    int high = distance;
    int answer = 0;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int prev = 0;  // 이전 바위의 위치 (출발점)
        int remove_count = 0;
        
        for (int rock : rocks) {
            if (rock - prev < mid) {
                // 현재 바위를 제거해야 최소 거리(mid)를 유지할 수 있음
                remove_count++;
            } else {
                // 현재 바위를 제거하지 않아도 최소 거리(mid)를 유지할 수 있음
                prev = rock;
            }
        }
        
        // 도착지점과 마지막 바위 사이의 거리도 체크
        if (distance - prev < mid) {
            remove_count++;
        }
        
        if (remove_count <= n) {
            // 바위 제거가 n번 이하로 가능하면 더 큰 최소 거리를 시도
            answer = mid;
            low = mid + 1;
        } else {
            // 바위 제거가 n번 이상 필요하면 더 작은 최소 거리를 시도
            high = mid - 1;
        }
    }
    
    return answer;
}
