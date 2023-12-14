#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto it = find(arr.begin(), arr.end(), 2);
    auto it2 = find(arr.rbegin(), arr.rend(), 2);
    
    if (it == arr.cend())
    {
        answer.push_back(-1);
        return answer;
    }
    
    int firstIdx = distance(arr.begin(), it);
    int lastIdx = distance(arr.rbegin(), it2);
    
    cout << firstIdx << " " << lastIdx << endl;
    
    answer = vector<int>(arr.begin() + firstIdx, arr.end() - lastIdx);
    
    return answer;
}