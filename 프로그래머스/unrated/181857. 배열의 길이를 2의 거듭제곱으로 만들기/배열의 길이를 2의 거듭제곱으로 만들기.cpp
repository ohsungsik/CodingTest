#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int target = 0;
    for (int i = 0;;i++)
    {
        target = pow(2, i);
        if (target >= arr.size())
            break;
    }
    
    int requir = target - arr.size();
    while (requir > 0)
    {
        arr.push_back(0);
        requir--;
    }
    
    answer = arr;
    
    return answer;
}