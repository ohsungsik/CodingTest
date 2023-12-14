#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for (const int& v : arr)
    {
        vector<int> temp = vector<int>(v, v);
        answer.insert(answer.end(), temp.begin(), temp.end());
    }
    
    return answer;
}