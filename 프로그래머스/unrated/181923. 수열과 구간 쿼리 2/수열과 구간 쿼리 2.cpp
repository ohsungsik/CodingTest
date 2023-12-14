#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const auto& query : queries)
    {
        vector<int> temp;
        for (int i = query[0]; i <= query[1]; i++)
        {
            // cout << i << " " << query[2] << endl;
            if (arr[i] > query[2])
            {
                temp.push_back(arr[i]);
            }
        }
        
        if (temp.size() != 0)
            answer.push_back(*min_element(temp.begin(), temp.end()));
        else
            answer.push_back(-1);
    }
    
    return answer;
}