#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if (arr1.size() != arr2.size())
    {
        answer = arr1.size() > arr2.size() ? 1 : -1;
        return answer;
    }
    
    int lhs = 0;
    int rhs = 0;
    
    for_each(arr1.begin(), arr1.end(), [&lhs](const int v) { 
        lhs += v;
    });
    for_each(arr2.begin(), arr2.end(), [&rhs](const int v) { 
        rhs += v;
    });
        
    if (lhs == rhs)
    {
        answer = 0;
        return answer;
    }
    
    answer = lhs > rhs ? 1 : -1;
    
    return answer;
}