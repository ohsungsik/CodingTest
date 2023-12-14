#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    vector<int> prevArr = arr;
    while (true)
    {
        for (int& value : arr)
        {
            if (value >= 50 && value % 2 == 0)
            {
                value /= 2;
            }
            else if (value < 50 && value % 2 == 1)
            {
                value = value * 2 + 1;
            }
        }
        
        // cout << arr[0] << endl;
        
        if (prevArr == arr)
            break;
        
        answer ++;
        prevArr = arr;
    }
    
    return answer;
}