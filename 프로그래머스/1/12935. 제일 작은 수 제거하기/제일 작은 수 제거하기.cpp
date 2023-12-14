#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    auto arrTemp = arr;
    sort(arrTemp.begin(), arrTemp.end());
    
    arr.erase(find(arr.begin(), arr.end(), arrTemp[0]));
    
    answer = arr;
    if (answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}