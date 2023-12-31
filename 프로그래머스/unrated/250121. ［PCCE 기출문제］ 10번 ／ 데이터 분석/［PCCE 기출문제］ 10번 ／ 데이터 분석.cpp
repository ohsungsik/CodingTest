#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int GetFilteringIndex(string ext)
{
    if (ext == "code")
        return 0;
    else if (ext == "date")
        return 1;
    else if (ext == "maximum")
        return 2;
    else
        return 3;
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    const int filter = GetFilteringIndex(ext);
    const int sortBy = GetFilteringIndex(sort_by);
    
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i][filter] > val_ext)
            continue;
        
        answer.push_back(data[i]);
    }
    
    sort(answer.begin(), answer.end(), [&](vector<int> lhs, vector<int> rhs)          
        {
            return lhs[sortBy] < rhs[sortBy];
        });
    
    return answer;
}