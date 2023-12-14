#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const vector<int>& query : queries)
    {
        for (int i = query[0]; i <= query[1]; i++)
        {
            if (i % query[2] == 0)
                arr[i]++;
        }
    }
    
    answer = arr;
    
    return answer;
}