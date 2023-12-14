#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for (int i = 0; i < flag.size(); i++)
    {
        if (flag[i] == true)
        {
            vector<int> v = vector<int>(arr[i] * 2, arr[i]);
            answer.insert(answer.end(), v.begin(), v.end());
        }
        else
        {
            answer.erase(answer.end() - arr[i], answer.end());
        }
    }
    
    return answer;
}