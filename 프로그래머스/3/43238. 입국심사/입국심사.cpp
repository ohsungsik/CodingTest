#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long low = 1;
    long long high = (long long) *max_element(times.begin(), times.end()) * n;
    long long answer = high;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long total = 0;

        for (int time : times) {
            total += mid / time;
        }

        if (total >= n) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}
