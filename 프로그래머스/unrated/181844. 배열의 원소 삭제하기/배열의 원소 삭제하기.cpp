#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for (int i = 0; i < delete_list.size(); i++)
    {
        const auto& idx = find(arr.begin(), arr.end(), delete_list[i]);
        if (idx != arr.end())
            arr.erase(idx);
    }
    
    answer = arr;
    
    return answer;
}