#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = -2;
    
    // queue1, queue2의 합 계산
    // sum(queue1) + sum(queue2) % 2 == 1이면 return -1
    const unsigned long long sumQ1 = accumulate(queue1.begin(), queue1.end(), 0ll);
    const unsigned long long sumQ2 = accumulate(queue2.begin(), queue2.end(), 0ll);
    const unsigned long long sum = sumQ1 + sumQ2;
    
    if (sum % 2 == 1) return -1;
    
    
    // target = (sum(queue1) + sum(queue2)) / 2
    const unsigned long long target = sum / 2;
    
    // 순서를 유지한체 하나의 vector로 합치면
    // 범위를 움직여가면서 합을 구하면 되나?
    vector<int> combined(queue1);
    combined.insert(combined.end(), queue2.begin(), queue2.end());
    
    unsigned long long left = 0;
    unsigned long long right = queue1.size();
    unsigned long long jobCount = ULLONG_MAX;
    
    unsigned long long currentSum = sumQ1;
    
    while (left <= right && right < combined.size())
    {
        if (currentSum == target)
        {
            jobCount = min(jobCount, left + (right - queue1.size()));
            currentSum -= combined[left]++;
        } 
        else if (currentSum < target)
        {
            currentSum += combined[right++];
        } 
        else
        {
            currentSum -= combined[left++];
        }
    }
    
    answer = jobCount == ULLONG_MAX ? -1 : jobCount;
    return answer;
}