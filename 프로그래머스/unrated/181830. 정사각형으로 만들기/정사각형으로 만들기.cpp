#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    
    int row = max((long)arr.size() - (long)arr[0].size(), 0L);
    int col = max((long)arr[0].size() - (long)arr.size(), 0l);
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i].push_back(0);    
        }
    }
    
    for (int i = 0; i < col; i++)
    {
        vector<int> temp = vector<int>(arr[0].size(), 0);
        arr.push_back(temp);
    }
    
    answer = arr;
    
    return answer;
}