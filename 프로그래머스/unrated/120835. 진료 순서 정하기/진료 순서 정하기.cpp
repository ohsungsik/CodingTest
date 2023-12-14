#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    vector<int> v = emergency;
    sort(v.begin(), v.end(), greater<int>());
    
    map<int, int> m;
    for (int i = 0; i < emergency.size(); i++)
    {
        m[v[i]] = i + 1;
    }
    
    for (const int& value : emergency)
    {
        answer.push_back(m[value]);
    }
    
    return answer;
}